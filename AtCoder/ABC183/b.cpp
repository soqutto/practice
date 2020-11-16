#include <bits/stdc++.h>

using namespace std;

int main(){
    int sx, sy, gx, gy;
    double x;
    cin >> sx >> sy >> gx >> gy;

    if(sx < gx){
        x = sx + ((double)sy / (double)(sy + gy)) * (gx - sx);
    } else {
        x = sx - ((double)sy / (double)(sy + gy)) * (sx - gx);
    }

    cout << fixed << setprecision(10) << x << endl;
    return 0;
}
