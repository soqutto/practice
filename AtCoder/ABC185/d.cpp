#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;

    vector<int> A(M);
    for(auto& a: A) cin >> a;

    sort(A.begin(), A.end());

    A.push_back(N+1);

    vector<int> white;
    
    for(int i = 0, j = 0; i < N && j < M+1;){
        if(i == (A[j] - 1)){
            ++i;
            ++j;
        } else {
            white.push_back((A[j] - 1) - i);
            i = A[j];
            ++j;
        }
    }

    int stamping_hands;
    
    if(white.empty()){
        stamping_hands = 0;
    } else {
        int min_white_width = *min_element(white.begin(), white.end());
        stamping_hands = 0;
        for(auto& w: white){
            stamping_hands += (int)ceil(w / (double)min_white_width);
        }
    }

    cout << stamping_hands << endl;

    return 0;
}
