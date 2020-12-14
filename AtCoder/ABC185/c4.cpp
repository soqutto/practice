#include <bits/stdc++.h>

using namespace std;

int main(){
    int L;
    cin >> L;

    __uint128_t ans = 1;

    for(int i = L-1; i >= L-11; --i){
        ans *= i;
    }
    for(int i = 11; i >= 1; --i){
        ans /= i;
    }

    cout << (int64_t)ans;

    return 0;
}
