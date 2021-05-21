#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int N; cin >> N;
    double ans = 0;
    for(int i=N-1; i>0; --i){
        ans += 1/(double)i;
    }
    ans *= N;

    cout << fixed << setprecision(15);
    cout << ans << endl;
    return 0;
}
