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
    cout << (int64_t)INT_MAX * INT_MAX << endl;
    cout << get_price(INT_MAX, INT_MAX, INT_MAX) << endl;
    cout << get_price_wrong(INT_MAX, INT_MAX, INT_MAX) << endl;

    return 0;
}
