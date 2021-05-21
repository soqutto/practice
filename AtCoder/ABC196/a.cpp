#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int ans = b;
    if(c >= 0) ans -= c;
    else ans -= c;

    cout << ans << endl;

    return 0;
}
