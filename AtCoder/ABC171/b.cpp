#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int N, K; cin >> N >> K;
    vector<int> P(N);
    for(auto& p : P) cin >> p;

    sort(ALL(P));
    int price = 0;
    for(int i=0; i<K; ++i){
        price += P[i];
    }

    cout << price << endl;

    return 0;
}
