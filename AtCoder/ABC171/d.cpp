#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int N; cin >> N;
    vector<int> A(N);
    map<int, int> M;
    int64_t S = 0;
    for(auto& a: A){
        cin >> a;
        S += a;
        M[a]++;
    }

    int Q; cin >> Q;
    vector<pair<int, int>> P(Q);
    for(auto& [a, b] : P) cin >> a >> b;

    for(auto [a, b]: P){
        int diff = b-a;
        int t = M[a];
        M[a] = 0;
        M[b] += t;
        S += diff * t;
        cout << S << endl;
    }
    return 0;
}
