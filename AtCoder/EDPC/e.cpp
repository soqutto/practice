#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
#define INF         (1e18)
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int N, W;
    cin >> N >> W;

    vector<pair<int, int>> item(N);
    for(auto& [w, v] : item){
        cin >> w >> v;
    }

    vector<vector<int64_t>> dp(N+1, vector<int64_t>((int)1e5+1, INF));
    dp[0][0] = 0;

    for(int i=0; i<N; ++i){
        for(int j=0; j<(int)1e5; ++j){
            if(j-item[i].second >= 0)
                chmin(dp[i+1][j], dp[i][j-item[i].second] + item[i].first);

            chmin(dp[i+1][j], dp[i][j]);
        }
    }

    int max_value = 0;
    for(int i=0; i<(int)1e5+1; ++i){
        if(dp[N][i] <= W) chmax(max_value, i);
    }

    cout << max_value << endl;

    return 0;
}
