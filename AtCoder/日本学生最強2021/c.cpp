#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int A, B;
    cin >> A >> B;

    int maxgcd = 1;
    for(int i=A; i<B; ++i){
        for(int j = i+1; j<=B; ++j){
            
            chmax(maxgcd, gcd(i, j));
        }
    }

    cout << maxgcd << endl;

    return 0;
}
