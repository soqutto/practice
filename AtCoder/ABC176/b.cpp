#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    string N; cin >> N;
    int n = 0;
    for(int i=0; i<N.size(); ++i){
        n += N[i] - '0';
        n %= 9;
    }

    cout << (n == 0 ? "Yes" : "No") << endl;
    return 0;
}
