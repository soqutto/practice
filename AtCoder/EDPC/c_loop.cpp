#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int N;
    cin >> N;

    vector<vector<int>> act(N, vector<int>(3));
    for(int i=0; i<N; ++i){
        for(int j=0; j<3; ++j) cin >> act[i][j];
    }

    vector<vector<int>> dp(N+1, vector<int>(3, 0));

    for(int i=0; i<N; ++i){
        for(int j=0; j<3; ++j){
            for(int k=0; k<3; ++k){
                if(j != k) chmax(dp[i+1][j], dp[i][k] + act[i][j]);
            }
        }
    }

    int ans = 0;
    for(int i=0; i<3; ++i) chmax(ans, dp[N][i]);
    cout << ans << endl;

    return 0;
}
