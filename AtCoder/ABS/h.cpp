#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int N; cin >> N;
    vector<int> D(N);
    for(auto& d: D) cin >> d;
    sort(ALL(D));

    int ans = 0;
    int prev_mochi_size = 0;
    for(auto d: D){
        if(prev_mochi_size < d){
            prev_mochi_size = d;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
