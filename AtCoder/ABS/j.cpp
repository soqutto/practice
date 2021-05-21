#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    string S; cin >> S;
    bool satisfiable = true;

    for(int i=0; i<S.size();){
        if(S.substr(i, 5) == "dream"){
            if(S.substr(i+5, 6) == "eraser"){
                i += 11;
            } else if(S.substr(i+5, 5) == "erase"){
                i += 10;
            } else if(S.substr(i+5, 2) == "er"){
                i += 7;
            } else {
                i += 5;
            }
        } else if (S.substr(i, 5) == "erase"){
            if(S.substr(i+5, 1) == "r"){
                i += 6;
            } else {
                i += 5;
            }
        } else {
            satisfiable = false;
            break;
        }
    }
    cout << (satisfiable ? "YES" : "NO") << endl;
    return 0;
}
