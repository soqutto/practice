#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    string s; cin >> s;
    bool isDifficult = true;
    for(int i; i<s.size(); ++i){
        if(i%2 == 0 && !islower(s[i])) isDifficult = false;
        else if(i%2 == 1 && !isupper(s[i])) isDifficult = false;
    }

    cout << (isDifficult ? "Yes" : "No") << endl;

    return 0;
}
