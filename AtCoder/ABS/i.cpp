#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int N, Y;
    cin >> N >> Y;

    int a = -1;
    int b = -1;
    int c = -1;
    for(int i=0; i<=N; ++i){
        for(int j=0; j<=N-i; ++j){
            if(10000*i + 5000*j + 1000*(N-i-j) == Y){
                a = i;
                b = j;
                c = N-i-j;
                break;
            }
        }
    }

    cout << a << " " << b << " " << c << endl;
    return 0;
}
