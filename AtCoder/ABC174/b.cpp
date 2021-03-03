#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int N; cin >> N;
    int64_t D; cin >> D;
    vector<pair<int64_t,int64_t>> P(N);
    for(auto& [x, y] : P) cin >> x >> y;

    int ans = 0;
    int64_t dst;
    for(auto [x, y] : P){
        dst = x*x + y*y;
        if(dst <= D*D) ans++;
    }
    cout << ans << endl;
    return 0;
}
