#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int N; cin >> N;
    vector<int> A(N);
    vector<int> B(N);

    for(auto& a: A) cin >> a;
    for(auto& b: B) cin >> b;

    int maxmin = 0;
    int minmax = 1001;
    int ans = 0;

    for(int i=0; i<N; ++i){
        chmax(maxmin, A[i]);
        chmin(minmax, B[i]);
    }

    if(maxmin > minmax){
        ans = 0;
    } else {
        ans = minmax - maxmin + 1;
    }

    cout << ans << endl;

    return 0;
}
