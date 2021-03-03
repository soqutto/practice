#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> H(N);
    for(auto& h: H) cin >> h;

    vector<int> dp(N, 1e9+1);
    dp[0] = 0;
    for(int i=0; i<N-1; ++i){
        if(i < N-2) dp[i+2] = min(dp[i+2], dp[i] + abs(H[i] - H[i+2]));
        dp[i+1] = min(dp[i+1], dp[i] + abs(H[i] - H[i+1]));
    }

    cout << dp[N-1] << endl;
    return 0;
}
