#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;


int main(){
    int64_t N; cin >> N;
    int64_t pow3 = 1;
    for(int64_t i=1; ; ++i){
        int64_t pow5 = 1;
        pow3 *= 3;
        for(int64_t j=1; ; ++j){
            pow5 *= 5;
            if(pow3 + pow5 == N){
                cout << i << " " << j << endl;
                return 0;
            }
            if((INT64_MAX - pow3)/5 <= pow5) break;
        }
        if((INT64_MAX/3) <= pow3) break;
    }
    cout << -1 << endl;
    return 0;
}
