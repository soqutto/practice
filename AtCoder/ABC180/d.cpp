#include <bits/stdc++.h>

using namespace std;

int main(){
    int64_t X, Y, A, B;
    cin >> X >> Y >> A >> B;

    int64_t ans = 0;
    while((double)A * X <= 1e19 && A*X <= X+B && A*X < Y){
        X *= A;
        ans++;
    }

    ans += (Y-X-1)/B;

    cout << ans << endl;

    return 0;
}
