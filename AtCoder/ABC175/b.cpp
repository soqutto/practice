#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int N; cin >> N;
    vector<int64_t> L(N);
    for(auto& l: L) cin >> l;

    int ans = 0;
    for(int i=0; i<N-2; ++i){
        for(int j=i+1; j<N-1; ++j){
            for(int k=j+1; k<N; ++k){
                if(L[i] != L[j] && L[j] != L[k] && L[k] != L[i]){
                    vector<int64_t> LL = {L[i], L[j], L[k]};
                    sort(ALL(LL));
                    if(LL[0]+LL[1]>LL[2]) ans++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
