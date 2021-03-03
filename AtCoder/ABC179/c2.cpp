#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()

using namespace std;

int main(){
    int N;
    cin >> N;

    int64_t ans = 0;
    for(int a=1; a<=N-1; ++a){
        ans += (N-1)/a;
    }

    cout << ans << endl;

    return 0;
}
