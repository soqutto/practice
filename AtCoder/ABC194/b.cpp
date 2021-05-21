#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int N; cin >> N;
    vector<pair<int, int>> WL(N);
    for(auto& [a, b] : WL) cin >> a >> b;

    int min_wl = 1e6;

    for(int i=0; i<N; ++i){
        for(int j=0; j<N; ++j){
            if(i == j) chmin(min_wl, WL[i].first + WL[j].second);
            else chmin(min_wl, max(WL[i].first, WL[j].second));
        }
    }

    cout << min_wl << endl;
    return 0;
}
