#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define INF (1e9)
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int N, K;
    cin >> N >> K;

    vector<int> H(N);
    for(auto& h: H) cin >> h;

    vector<int> dp(N, INF);
    dp[0] = 0;

    for(int i=0; i<N-1; ++i){
        for(int j=i+1; j<=min(i+K, N-1); ++j){
            chmin(dp[j], dp[i] + abs(H[i] - H[j]));
        }
    }

    cout << dp[N-1] << endl;

    return 0;
}
