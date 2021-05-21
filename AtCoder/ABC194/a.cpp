#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int A, B; cin >> A >> B;

    int block = A + B;
    int ans;
    if(block >= 15 && B >= 8) ans = 1;
    else if(block >= 10 && B >= 3) ans = 2;
    else if(block >= 3) ans = 3;
    else ans = 4;

    cout << ans << endl;
    return 0;
}
