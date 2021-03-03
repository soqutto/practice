#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    string s, t;
    cin >> s >> t;

    int ans = 0;

    for(int i=0; i<(int)s.size(); ++i){
        if(s[i] != t[i]) ans++;
    }

    cout << ans << endl;

    return 0;
}
