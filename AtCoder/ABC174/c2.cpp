#include <bits/stdc++.h>

using namespace std;

int main(){
    int K;
    cin >> K;

    int k = 1;
    int m = 7;
    int mod;

    while(true){
        mod = m % K;
        if(mod == 0){
            break;
        } else {
            m = mod * 10 + 7;
            if(k >= K){
                k = -1;
                break;
            } else {
                k++;
            }
        }
    }

    cout << k << endl;
    
    return 0;
}
