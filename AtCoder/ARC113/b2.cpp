#include <bits/stdc++.h>
#include <atcoder/all>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;
using namespace atcoder;

int tail_digit(int64_t n){
    string s = to_string(n);
    return s[s.size()-1] -'0';
}

int main(){
    int64_t A, B, C;
    cin >> A >> B >> C;

    int bcm4;
    if(B%4 == 2){
        if(C == 1) bcm4 = 2;
        else bcm4 = 4;
    } else if(B%2 == 0) bcm4 = 4;
    else {
        if(C % 2 == 1) bcm4 = B%4;
        else bcm4 = B*B%4;
    }

    int atail = tail_digit(A);
    for(int i=2; i<=bcm4; ++i){
        atail *= atail;
        atail = tail_digit(atail);
    }

    cout << atail << endl;

    return 0;
}
