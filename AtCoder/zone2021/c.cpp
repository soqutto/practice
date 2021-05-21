#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int N; cin >> N;
    vector<vector<int>> param(N, vector<int>(5));

    for(int i=0; i<N; ++i){
        for(auto& p: param[i]) cin >> p;
    }

    vector<vector<vector<int>>> dp(4, vector<vector<int>>(3001, vector<int>(5)));
    vector<vector<int>> dpAns(4, vector<int>(3001));

    for(int i=0; i<N; ++i){
        for(int j=0; j<5; ++j) dp[1][i+1][j] = param[i][j];
        dpAns[1][i+1] = *min_element(ALL(dp[1][i+1]));

        vector<int> p = dp[1][i];
        for(int j=0; j<5; ++j) chmax(p[j], param[i][j]);
        if(*min_element(ALL(p)) > dpAns[2][i+1]) chmax(dpAns[2][i+1], *min_element(ALL(p)));

        vector<int> p2 = dp[2][i];
        for(int j=0; j<5; ++j) chmax(p2[j], param[i][j]);
        if(*min_element(ALL(p2)) > dpAns[3][i+1]) chmax(dpAns[3][i+1], *min_element(ALL(p2)));

    }

    int ans = *max_element(ALL(dpAns[3]));

    cout << ans << endl;
    return 0;
}
