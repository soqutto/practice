#include <bits/stdc++.h>

using namespace std;

int64_t get_price(int64_t n, int64_t a, int64_t b){
    string tmp = to_string(n);
    int dn = tmp.length();

    return a * n + b * dn;
}

int64_t get_price_wrong(int64_t n, int a, int b){
    string tmp = to_string(n);
    int dn = tmp.length();

    return a * n + b * dn;
}

int main(){
    using ll = int64_t;
    ll A, B, X;
    for(int i = 0; i <= 1e9; i += 1e7){
        for(int j = 0; j <= 1e9; j += 1e7){
            for(int n = 0; n <= 1e9; n += 1e7){
                cout << "N: " << n << "A: " << i << ", B: " << j << endl; 
                assert(get_price(n, i, j) == get_price_wrong(n, i, j));
            }
        }
    }
    cout << "Test Passed!" << endl;
    return 0;
}
