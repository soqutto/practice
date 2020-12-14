#include <bits/stdc++.h>

using namespace std;

int main(){
    int L;
    cin >> L;

    long long int l = L - 1;
    long long int ans = 1;
    int lower = 1;

    vector<int> Lvec(11);
    for(int i = 0; i < 11; ++i){
        Lvec[i] = l - i;
    }

    bool flag = false;

    for(int i = 11; i >= 2; --i){
        for(int j = 0; j < 11; ++j){
            if(Lvec[j] % i == 0){
                Lvec[j] /= i;
                flag = true;
                continue;
            }
        }
        if(!flag) lower *= i;
        flag = false;
    }

    for(int i = 0; i < Lvec.size(); ++i){
        ans *= Lvec[i];
    }

    ans /= lower;

    cout << ans;

    return 0;
}
