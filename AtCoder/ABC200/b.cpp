#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int64_t N, K; cin >> N >> K;
    for(int i=0; i<K; ++i){
        if(N % 200 == 0){
            N /= 200;
        } else {
            string s = to_string(N);
            s += "200";
            N = stoll(s);
        }
    }
    cout << N << endl;
    return 0;
}
