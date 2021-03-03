#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int64_t N; cin >> N;
    map<int64_t, int64_t> M;
    for(int64_t i=2; i*i<=N; ++i){
        while(N % i == 0){
            N /= i;
            M[i]++;
        }
    }
    if(N!=1) M[N]++;
    int64_t ans = 0;
    for(auto& m: M){
        int64_t b = 0;
        int64_t i = 1;
        while(m.second - i >= 0){
            b++;
            m.second -= i;
            i++;
        }
        ans += b;
    }

    cout << ans << endl;
    return 0;
}
