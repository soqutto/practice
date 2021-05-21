#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    string X; cin >> X;
    string n;
    bool decimal = true;

    for(int i=0; i<X.size(); ++i){
        if(X[i] == '.'){
            decimal = false;
            n = X.substr(0, i);
        }
    }

    if(decimal) n = X;

    cout << n << endl;

    return 0;
}
