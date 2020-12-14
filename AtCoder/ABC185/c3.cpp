#include <bits/stdc++.h>

using namespace std;

int main(){
    int L;
    cin >> L;

    int64_t ans = L-1;

    for(int i = 1; i <= 10; ++i){
        ans *= L-1-i;
        ans /= i+1;
    }

    cout << ans;

    return 0;
}
