#include <bits/stdc++.h>

using namespace std;

int main(){
    int A, B, C, X, Y;
    cin >> A >> B >> C >> X >> Y;

    int Ap = 0, Bp = 0, ABp = 0;
    int64_t ans = 15000 * 1e5;

    for(int i=0; i<= 2 * max(X, Y); i += 2){
        ABp = i;
        Ap = max(0, X-ABp/2);
        Bp = max(0, Y-ABp/2);
        ans = min(ans, (int64_t) A*Ap + B*Bp + C*ABp);
    }
    cout << ans << endl;
    return 0;
}
