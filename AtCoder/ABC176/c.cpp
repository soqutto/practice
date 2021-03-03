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

    int max_h = 0;
    int64_t steps = 0;
    for(int i=0; i<N; ++i){
        chmax(max_h, A[i]);
        if(max_h > A[i]) steps += max_h - A[i];
    }

    cout << steps << endl;
    return 0;
}
