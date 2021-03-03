#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int64_t N; cin >> N;

    unordered_set<int64_t> num;
    for(int64_t i=2; i<=min(N,(int64_t)1e5); ++i){
        int64_t b = i*i;
        while(b <= N){
            num.insert(b);
            b *= i;
        }
    }

    cout << N - num.size() << endl;
    return 0;
}
