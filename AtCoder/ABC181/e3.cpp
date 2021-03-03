#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    
    vector<int64_t> H(N);
    for(auto& h: H) cin >> h;
    vector<int64_t> W(M);
    for(auto& w: W) cin >> w;
    
    sort(H.begin(), H.end());
    
    vector<int64_t> diffsum_odd(N/2+1);
    vector<int64_t> diffsum_even(N/2+1);

    for(int i=1; i<(int)diffsum_odd.size(); ++i){
        diffsum_odd[i] = diffsum_odd[i-1] + H[i*2-1] - H[(i-1)*2];
        diffsum_even[i] = diffsum_even[i-1] + H[i*2] - H[i*2-1];
    }

    int64_t min_sumdiff = 1e16;

    for(auto w: W){
        // teacher's partner -> key-1 or key
        int key = distance(H.begin(), lower_bound(H.begin(), H.end(), w));

        int pair_student;
        int64_t diff_snt;
        if(key == 0) pair_student = 0;
        else if(key == N) pair_student = N - 1;
        else {
            if(key % 2 == 0) pair_student = key;
            else pair_student = key - 1;
        }

        diff_snt = abs(w - H[pair_student]);

        /*else {
            if(w - H[key-1] < H[key] - w){
                pair_student = key -1;
                diff_snt = H[key-1] - w;
            } else {
                pair_student = key;
                diff_snt = H[key] - w;
            }
        }*/

        int64_t sumdiff = 0;
        sumdiff += diffsum_odd[pair_student/2];
        sumdiff += diff_snt;
        sumdiff += diffsum_even[N/2] - diffsum_even[pair_student/2];

        min_sumdiff = min(min_sumdiff, sumdiff);
    }
    cout << min_sumdiff << endl;
    return 0;
}
