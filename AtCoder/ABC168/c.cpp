#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int A, B, H, M;
    cin >> A >> B >> H >> M;

    double deg_h = (H*60+M)/720.0*360.0;
    double deg_m = M/60.0*360.0;

    double ans = sqrt(A*A + B*B - 2*A*B*cos(abs(deg_h-deg_m)/180.0*M_PI));

    cout << fixed << setprecision(15);
    cout << ans << endl;

    return 0;
}
