#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int a, b, c, x;
    cin >> a >> b >> c >> x;

    int ans = 0;

    for(int i=0; i<=a; ++i){
        for(int j=0; j<=b; ++j){
            for(int k=0; k<=c; ++k){
                if(500*i + 100*j + 50*k == x) ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
