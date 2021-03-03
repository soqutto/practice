#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int N; cin >> N;
    vector<int> A(N), P(N), X(N);
    for(int i=0; i<N; ++i) cin >> A[i] >> P[i] >> X[i];

    int min_price = 1e9+1;
    bool buyable = false;

    for(int i=0; i<N; ++i){
        if(X[i]-A[i] > 0){
            buyable = true;
            chmin(min_price, P[i]);
        }
    }

    if(!buyable){
        cout << -1 << endl;
    } else {
        cout << min_price << endl;
    }

    return 0;
}
