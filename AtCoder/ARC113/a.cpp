#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int K; cin >> K;
    int64_t ans = 0;
    vector<int64_t> S(K+1);
    for(int i=1; i<=K; ++i){
        unordered_set<int> b;
        for(int j=1; j*j<=i; ++j){
            if(i % j == 0){
                b.insert(j);
                b.insert(i/j);
            }
        }
        int bn = b.size();
        S[i] = S[i-1] + bn;
    }

    for(int i=1; i<=K; ++i){
        ans += S[K/i];
    }

    cout << ans << endl;
    return 0;
}
