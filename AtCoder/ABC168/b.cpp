#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int K; string S;
    cin >> K >> S;

    if(S.size() <= K){
        cout << S << endl;
    } else {
        cout << S.substr(0, K) << "..." << endl;
    }
    return 0;
}
