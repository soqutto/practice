#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int X, Y, Z;
    cin >> X >> Y >> Z;

    int max_price = 0;

    for(int i=0; i<1e7; ++i){
        if(Y*Z > X*i) {
            max_price = i;
        } else break;
    }

    cout << max_price << endl;

    return 0;
}
