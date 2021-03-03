#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int64_t A; cin >> A;
    double B; cin >> B;
    int64_t B_i = round(B * 100);

    int64_t ans = A * B_i / 100;
    cout << ans << endl;
    return 0;
}
