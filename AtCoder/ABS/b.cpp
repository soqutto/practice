#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    if(a*b % 2){
        cout << "Odd" << endl;
    } else {
        cout << "Even" << endl;
    }
    return 0;
}
