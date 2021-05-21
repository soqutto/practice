#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int N; cin >> N;
    string s = to_string(N);
    int len = s.length();
    bool isReturnable = false;

    if(len == 1){
        cout << "Yes" << endl;
        return 0;
    }

    for(int i=0; i<=to_string(N).length(); ++i){
        if(i != 0) s = '0' + s;
        bool r = true;

        for(int j=0; j<s.length()/2; ++j){
            if(s[j] != s[s.length()-1-j]){
                r = false;
                break;
            }
        }
        if(r) isReturnable = true;
    }

    cout << (isReturnable ? "Yes" : "No") << endl;
    return 0;
}
