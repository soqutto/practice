#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int64_t X, K, D;
    cin >> X >> K >> D;
    
    int64_t ans;
    if(X<0) X *= -1;
    if(K % 2 == 0){
        if(D >= X) ans = X;
        else{
            int64_t pos = X / (2*D);
            int64_t mod = X % (2*D);
            int64_t step = K/2;
            if(step < pos) ans = (pos - step)*(2*D)+mod;
            else if(step == pos) ans = mod;
            else ans = min(abs(X-(pos+1)*(2*D)), mod);
        }
    } else {
        if(D >= 2*X) ans = X;
        else if(D >= X) ans = abs(X-D);
        else
    }
    cout << ans << endl;
    return 0;
}
