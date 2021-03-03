#include <bits/stdc++.h>

using namespace std;

int main(){
    int64_t a, b, c, d;
    cin >> a >> b >> c >> d;

    int64_t ans;
    ans = b * d;
    ans = max(ans, a * d);
    ans = max(ans, b * c);
    ans = max(ans, a * c);

    cout << ans << endl;
    return 0;
}
