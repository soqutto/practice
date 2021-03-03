#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int T; cin >> T;
    vector<pair<int64_t, int64_t>> C(T);
    for(auto& [l, r] : C) cin >> l >> r;

    for(int t=0; t<T; ++t){
        int64_t l, r;
        tie(l, r) = C[t];
        if(r-2*l>=0) cout << (r-2*l+1)*(r-2*l+2)/2 << endl;
        else cout << 0 << endl;
    }



    return 0;
}
