#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()

using namespace std;

int main(){
    int N, K;
    cin >> N >> K;

    vector<pair<int, int>> S;
    for(auto& [l, r]: S) cin >> l >> r;

    vector<int64_t> dp(N+1);
    vector<int64_t> dpsum(N+1);
    dp[1] = 1;
    dpsum[1] = 1;

    for(int i=2; i<=N; ++i){
        for(int j=0; j<K; ++j){
            int l, r;
            tie(l, r) = S[j];
            l = max(1, i-l);
            r = 
    }
    return 0;
}
