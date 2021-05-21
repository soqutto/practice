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
    sort(ALL(A), greater<int>());

    int alice = 0;
    int bob = 0;

    for(int i=0; i<N; i += 2){
        alice += A[i];
        if(i+1 != N) bob += A[i+1];
    }
    cout << alice - bob << endl;
    return 0;
}
