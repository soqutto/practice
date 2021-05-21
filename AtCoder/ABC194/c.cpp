#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int N; cin >> N;
    vector<int64_t> A(N);
    for(auto& a: A) cin >> a;

    sort(ALL(A));
    vector<int64_t> sum(N+1);
    for(int i=0; i<N; ++i){
        sum[i+1] = sum[i] + A[i];
    }
    
    int64_t ans = 0;
    for(int i=1; i<N; ++i){
        ans += A[i]*A[i]*i;
    }
    for(int j=0; j<N-1; ++j){
        ans += A[j]*A[j]*(N-j-1);
    }
    for(int i=1; i<N; ++i){
        ans -= 2*A[i]*sum[i];
    }

    cout << ans << endl;

    return 0;
}
