#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int N; cin >> N;
    vector<int64_t> A(N);
    for(auto& a: A) cin >> a;

    int64_t ans = 0;
    unordered_map<int64_t, int64_t> uom;
    for(auto a: A) uom[a % 200]++;

    for(int i=0; i<N-1; ++i){
        uom[A[i]%200]--;
        ans += uom[A[i]%200];
    }
    cout << ans << endl;
    return 0;
}
