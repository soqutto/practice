#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int64_t mod = 998244353;
    int64_t A, B, C;
    cin >> A >> B >> C;

    int64_t sigA = (A+1) * A / 2 % mod;
    int64_t sigB = (B+1) * B / 2 % mod;
    int64_t sigC = (C+1) * C / 2 % mod;
    int64_t ans = sigA * sigB % mod * sigC % mod;

    cout << ans << endl;
    return 0;
}
