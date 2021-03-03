#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;

    vector<int64_t> A(N);
    for(auto& a: A) cin >> a;

    vector<int> X(M), Y(M);
    vector<vector<int>> nodes(N, vector<int>(0));
    for(int i=0; i<M; ++i){
        cin >> X[i] >> Y[i];
        nodes[X[i]-1].emplace_back(Y[i]-1);
    }

    vector<int64_t> dp(N, 1e10);
    for(int i=0; i<N; ++i){
        for(int j=0; j < nodes[i].size(); ++j){
            dp[nodes[i][j]] = min(min(dp[nodes[i][j]], dp[i]), A[i]);
        }
    }

    vector<int64_t> profit(N);
    for(int i=0; i<N; ++i) profit[i] = A[i] - dp[i];
    int64_t ans = *max_element(profit.begin(), profit.end());

    cout << ans << endl;

    return 0;
}
