#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> A(N);
    vector<vector<pair<int, bool>>> M(N);

    for(int i=0; i<N; ++i){
        cin >> A[i];
        M[i] = vector<pair<int, bool>>(A[i]);
        for(auto& [x, y] : M[i]){
            cin >> x;
            x--;
            int tmp;
            cin >> tmp;
            y = tmp ? true : false;
        }
    }

    int ans = 0;

    for(unsigned int i=0; i<(1<<N); ++i){
        //vector<bool> honest(N);
        bitset<15> honest(i);
        //for(int j=0; j<N; ++j) honest[j] = (i>>j)&1u ? true : false;

        bool inconsist = false;
        for(int j=0; j<N; ++j){
            for(int k=0; k<A[j]; ++k){
                int obj_person = M[j][k].first;
                bool obj_state = M[j][k].second;
                bool real_state = honest[obj_person];
                if(honest[j]){
                    if(real_state != obj_state)
                        inconsist = true;
                }
            }
        }

        if(!inconsist){
            int honest_num = honest.count();
            //int honest_num = 0;
            //for(int i=0; i<N; ++i){
            //    if(honest[i]) honest_num++;
            ans = max(ans, honest_num);
        }
    }

    cout << ans << endl;

    return 0;
}
