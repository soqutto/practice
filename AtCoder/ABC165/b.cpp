#include <bits/stdc++.h>

using namespace std;

int main(){
    int64_t X;
    cin >> X;

    // 100 * 1.01^N(year)
    int64_t money = 100;
    int64_t money1 = 100;
    int64_t money2 = 100;
    int64_t y = 0;
    while(money < X){
        y++;
        money += money / 100;
    }
    cout << endl;

    cout << y << endl;

    return 0;
}
