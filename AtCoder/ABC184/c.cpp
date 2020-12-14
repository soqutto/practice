#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int r1, c1, r2, c2;
    cin >> r1 >> c1;
    cin >> r2 >> c2;

    int hand;

    long long int sum1, sum2;
    long long int dif1, dif2;

    sum1 = r1 + c1;
    sum2 = r2 + c2;
    dif1 = r1 - c1;
    dif2 = r2 - c2;

    if(r1 == r2 && c1 == c2){
        hand = 0;
    } else if(abs(r1 - r2) + abs(c1 - c2) <= 3){
        hand = 1;
    } else if(dif1 == dif2){
        hand = 1;
    } else if(sum1 == sum2){
        hand = 1;
    } else if(sum1 % 2 == sum2 % 2){
        hand = 2;
    } else {
        hand = 3;
        for(long long int y = max(0LL, c1-3); y <= c1 + 3; ++y){
            for(long long int x = max(0LL, r1-3); x <= r1 + 3; ++x){
                if(abs(r1 - x) + abs(c1 - y) <= 3 && ((x + y == sum2) || (x - y == dif2))) hand = 2;
            }
        }
    }

    cout << hand << endl;

    return 0;
}
