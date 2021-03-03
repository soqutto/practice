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

    int64_t At = tail_digit(A);

    vector<int> mod = {1,1,4,4,2,1,1,4,4,2};
    /*int64_t At = tail_digit(A);
    vector<int> Atail;
    int mod;
    Atail.push_back(At);
    for(int i=1; ; ++i){
        At *= At;
        At = tail_digit(At);
        if(find(ALL(Atail), At) != Atail.end()){
            mod = i; break;
        } else {
            Atail.push_back(At);
        }
    }*/

    int64_t idx = pow_mod(B, C, mod[At]);
    int64_t ans = 1;
    for(int i=At; i<=idx; ++i){
        ans *= At;
        ans = tail_digit(ans);
    }

    cout << ans << endl;
    return 0;
}
