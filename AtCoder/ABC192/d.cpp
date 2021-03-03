#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int64_t ndig(int64_t n, vector<int64_t> &digits){
    int64_t ans = 0;
    int64_t unit = 1;
    for(int i=0; i<digits.size(); ++i){
        ans += digits[i] * unit;
        unit *= n;
    }

    return ans;
}

int main(){
    string X; cin >> X;
    int64_t M; cin >> M;
    int max_digit = 0;
    int digits = X.size();
    vector<int64_t> Xdigits(digits);
    for(int i=0; i<digits; ++i){
        chmax(max_digit, X[i] - '0');
        Xdigits[i] = X[i] - '0';
    }

    int64_t ans;
    if(digits == 1){
        if(X <= M) ans = 1;
        else ans = 0;
    } else {
        int64_t n = max_digit + 1;
        if(ndig(n, Xdigits) > M){
            ans = 0;
        } else {
        }
    }

    cout << ans << endl;

    return 0;
}
