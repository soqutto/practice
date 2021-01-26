#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> A(N), B(N);
    vector<int64_t> S(N);
    int64_t sum = 0;
    for(int i=0; i<N; ++i){
        cin >> A[i] >> B[i];
        S[i] = 2LL * A[i] + B[i];
        sum += A[i];
    }

    sort(S.begin(), S.end());

    int cities = 0;
    int64_t score = 0;

    for(auto it = S.rbegin(); it != S.rend(); ++it){
        score += *it;
        cities++;
        if(score > sum) break;
    }

    cout << cities << endl;

    return 0;
}
