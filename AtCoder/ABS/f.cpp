#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int n, a, b;
    cin >> n >> a >> b;

    int ans = 0;

    for(int i=1; i<=n; ++i){
        string s = to_string(i);
        int sum = 0;
        for(char c: s) sum += c - '0';
        if(a <= sum && sum <= b) ans += i;
    }
    cout << ans << endl;
    return 0;
}
