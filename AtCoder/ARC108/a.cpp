#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int64_t S, P;
    cin >> S >> P;

    bool ans = false;
    for(int64_t i=1; i*i<=P; ++i){
        if(P%i == 0 && i+P/i == S){ ans = true; break; }
    }
    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}
