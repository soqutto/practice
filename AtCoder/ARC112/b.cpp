#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int64_t B, C;
    cin >> B >> C;

    int64_t subt, ans;

    if(C%2==1){
        subt = C/2;
        if(B > 0){
            if(subt<B) ans = subt*2 + 2 + (subt-1)*2 - 1;
            else ans = B*2 + (subt-1)*2 + 1;
        } else if(B == 0){
            ans = subt*2;
        } else {
            if(subt<B) ans = subt*2-1 + subt + 2;
            else ans = -B*2 + subt * 2;
        }
    } else {
        subt = C/2;
        if(B > 0){
            if(subt-1<B) ans = subt*2 - 1 + 2 + (subt-1) * 2;
            else ans = B*2 + (subt-1)*2 + 1;
        } else if (B == 0){
            if(subt == 0) ans = 1;
            else ans = (subt-1)*2+2;
        } else {
            if(subt-1<B) ans = (subt-1)*2+1 + 2 + (subt-1) * 2 +1;
            else ans = -B*2 + 1 + (subt-1) * 2 + 1;
        }
    }

    cout << ans << endl;

    return 0;
}
