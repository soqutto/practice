#include <bits/stdc++.h>

using namespace std;

int64_t X, Y, A, B;

bool objfunc(int64_t n){
    return B < (X + B * n)*(A - 1);
}

int main(){
    // X: initial power
    // Y: evolution point
    // A: power multiply value
    // B: power increase value
    // Maximize experimental point unless evolution
    cin >> X >> Y >> A >> B;
    
    int64_t exp = 0;
    int64_t pup_mul, pup_add = B;
    while(true){
        pup_mul = X * (A - 1);
        if(pup_mul <= pup_add){
            if(X * A >= Y) break;
            X *= A;
            exp++;
        } else {
            int64_t minv = 1;
            int64_t maxv = 1e18;
            int64_t n, left = minv, right = maxv, mid, steps;
            int64_t nmax = 0;
            while(left <= right){
                mid = left + (right - left) / 2;
                if(objfunc(mid)){
                    nmax = mid;
                    left = mid+1;
                } else {
                    right = mid-1;
                }
            }
            n = nmax;
            if((Y-X)/pup_add <= n){
                steps = (Y-1-X)/pup_add;
                X += B * steps;
                exp += steps;
                break;
            } else {
                steps = n;
                X += B * steps;
                exp += steps;
            }
        }
    }
    cout << exp << endl;

    return 0;
}
