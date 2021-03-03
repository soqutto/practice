#include <bits/stdc++.h>

using namespace std;

int main(){
    int A, B, C, X, Y;
    cin >> A >> B >> C >> X >> Y;

    int Ap = 0, Bp = 0, ABp = 0;
    int minXY = min(X, Y);
    if((A+B)/2.0 > C){
        ABp += 2 * minXY;
    } else {
        Ap += minXY;
        Bp += minXY;
    }

    X -= minXY;
    Y -= minXY;

    if(Y == 0){
        if(A < 2 * C) Ap += X;
        else ABp += X * 2;
    } else {
        if(B < 2 * C) Bp += Y;
        else ABp += Y * 2;
    }

    int ans = A * Ap + B * Bp + C * ABp;

    cout << ans << endl;

    return 0;
}
