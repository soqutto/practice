#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int64_t N; cin >> N;
    int64_t ans = 0;

    int64_t base_l = 1;
    int64_t base_r = 1e3;

    for(int i=0; ; ++i){
        if(N >= base_r){
            ans += i * (base_r - base_l);
            base_l = base_r;
            base_r *= 1e3;
            continue;
        } else {
            ans += i * (N - base_l + 1);
            break;
        }
    }

    cout << ans << endl;

    return 0;
}
