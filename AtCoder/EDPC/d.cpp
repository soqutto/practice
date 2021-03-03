#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int N, W;
    cin >> N >> W;

    vector<pair<int, int64_t>> item(N);
    for(auto& [w, v] : item) cin >> w >> v;

    vector<vector<int64_t>> dp(N+1, vector<int64_t>(W+1, 0));

    for(int i=0; i<N; ++i){
        for(int w=0; w<W; ++w){
            if(w+1 - item[i].first >= 0)
                chmax(dp[i+1][w+1], dp[i][w+1 - item[i].first] + item[i].second);

            chmax(dp[i+1][w+1], dp[i][w+1]);
        }
    }
    /*
    cout << " i\\w ";
    int l = 5;
    REP(w, W+1) cout << setw(l) << w;
    cout << endl;
    REP(i, N+1) {cout << setw(l) << i; REP(w, W+1) cout << setw(l) << dp[i][w]; cout << endl;}
    */

    cout << dp[N][W] << endl;

    return 0;
}
