#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int a, b, c, k;
    cin >> a >> b >> c >> k;

    int maxval;
    if(k <= a) maxval = k;
    else if(k <= a+b) maxval = a;
    else maxval = a - (k-(a+b));

    cout << maxval << endl;

    return 0;
}
