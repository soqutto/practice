#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> A(N), B(N), C(N);
    for(int i=0; i<N; ++i){
        int a, b, c;
        cin >> a >> b >> c;
        A[i] = a; B[i] = b; C[i] = c;
    }

    vector<vector<int>> dp(3, vector<int>(N+1, 0));

    for(int i=0; i<N; ++i){
        chmax(dp[0][i+1], max(dp[1][i], dp[2][i]) + A[i]);
        chmax(dp[1][i+1], max(dp[0][i], dp[2][i]) + B[i]);
        chmax(dp[2][i+1], max(dp[0][i], dp[1][i]) + C[i]);
    }

    int max_happiness = max(max(dp[0][N], dp[1][N]), dp[2][N]);
    cout << max_happiness << endl;

    return 0;
}
