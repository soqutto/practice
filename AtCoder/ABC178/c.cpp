#include <bits/stdc++.h>

using namespace std;

int64_t modpow(int base, int idx, int mod){
    if(idx <= 0) return 1LL;

    int64_t ret = base % mod;
    for(int i=1; i<idx; ++i){
        ret *= (int64_t)base;
        ret %= (int64_t)mod;
    }
    return ret;
}

int main(){
    int N;
    cin >> N;

    int mod = 1e9+7;

    int64_t all = modpow(10, N, mod);
    int64_t no_contain_zero = modpow(9, N, mod);
    int64_t no_contain_nine = no_contain_zero;
    int64_t no_contain_nine_and_zero = modpow(8, N, mod);

    int64_t ans = all;
    ans -= no_contain_zero;
    ans %= mod;
    ans -= no_contain_nine;
    ans %= mod;
    ans += no_contain_nine_and_zero;
    ans %= mod;
    ans += mod;
    ans %= mod;

    cout << ans << endl;

    return 0;
}
