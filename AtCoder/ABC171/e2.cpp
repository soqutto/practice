#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int N; cin >> N;
    vector<int> A(N);
    for(auto& a: A) cin >> a;

    int s = 0;
    for(auto a: A) s ^= a;

    for(auto a: A) cout << (s ^ a) << " ";
    cout << endl;
    return 0;
}
