#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int N; cin >> N;
    vector<int64_t> A(N);
    int64_t prod = 1;

    for(auto& a: A){
        cin >> a;
        if(a == 0){
            cout << 0 << endl;
            return 0;
        }
    }

    for(auto a: A){
        if(prod > (int64_t)1e18/a){
            prod = -1;
            break;
        }
        prod *= a;
    }
    cout << prod << endl;
    return 0;
}
