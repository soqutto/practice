#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;


int main(){
    int N; cin >> N;
    int x0, y0; cin >> x0 >> y0;
    int xh, yh; cin >> xh >> yh;

    double centerX = (x0+xh) / 2.0;
    double centerY = (y0+yh) / 2.0;

    double rotate = 2.0 * M_PI / N;

    double ansX = cos(rotate) * (x0 - centerX) - sin(rotate) * (y0 - centerY) + centerX;
    double ansY = sin(rotate) * (x0 - centerX) + cos(rotate) * (y0 - centerY) + centerY;

    cout << fixed << setprecision(15) << ansX << " " << ansY << endl;

    return 0;
}
