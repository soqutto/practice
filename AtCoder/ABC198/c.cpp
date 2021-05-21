#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int R, X, Y;
    cin >> R >> X >> Y;

    int64_t R_sq = R * R;
    int64_t dst_sq = X*X + Y+Y;
    int64_t ans;

    if(R_sq == dst_sq){
        ans = 1;
    } else if (R_sq > dst_sq) {
        ans = 2;
    } else if (dst_sq % R_sq == 0) {
        ans = (int64_t)round(sqrt(dst_sq / R_sq));
    } else {
        ans = (int64_t)floor(sqrt(dst_sq / R_sq)) + 1;
    }

    cout << ans << endl;
    return 0;
}
