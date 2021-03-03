#include <bits/stdc++.h>

using namespace std;

int main(){
    int64_t n;
    cin >> n;

    int64_t left = 1;
    int64_t right = 2*1e9;
    int64_t max_x = -1;
    int64_t mid = 0;
    while(left <= right){
        mid = (right-left)/2+left;
        if(mid * (mid+1) / 2 <= n+1){
            max_x = max(max_x, mid);
            left = mid+1;
        } else {
            right = mid-1;
        }
    }

    // max_x ... n+1の丸太で切り出せる1...xの最大のx

    int64_t ans = n-max_x+1;
    cout << ans << endl;

    return 0;
}
