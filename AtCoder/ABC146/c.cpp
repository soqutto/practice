#include <bits/stdc++.h>

using namespace std;

int64_t get_price(int64_t n, int64_t a, int64_t b){
    string tmp = to_string(n);
    int dn = tmp.length();

    return a * n + b * dn;
}

int main(){
    using ll = int64_t;
    ll A, B, X;
    cin >> A >> B >> X;

    ll minN = 1;
    ll maxN = 1e9;

    ll left = minN;
    ll right = maxN;
    ll mid;

    ll buyable_max = 0;

    while(left <= right){
        mid = left + (right-left) / 2;
        //printf("left : %d, right: %d, mid: %d\n", left, right, mid);
        if(get_price(mid, A, B) <= X){
            left = mid + 1;
            buyable_max = mid;
        } else {
            right = mid - 1;
        }
    }

    //cout << "price " << buyable_max << " : " << get_price(buyable_max, A, B) << " <= " << X << endl;
    /*
    if(buyable_max == maxN) assert(get_price(buyable_max, A, B) <= X);
    else if(buyable_max == 0) assert(get_price(1, A, B) > X);
    else assert(get_price(buyable_max, A, B) <= X && get_price(buyable_max+1, A, B) > X);
    */
    cout << buyable_max << endl;

    return 0;
}
