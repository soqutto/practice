#include <bits/stdc++.h>

using namespace std;


int main(){
    string N;
    cin >> N;

    const int MAX = 20;
    int k = N.size();
    int change_digits = MAX;
    vector<int> digits(k);

    for(int i = 0; i < k; ++i) digits[i] = N[i] - '0';

    // bit search
    for(int mask = 0; mask < (1 << k); ++mask){
        vector<int> Ntmp;
        int num_deleted_digit = 0;
        int sum = 0;
        for(int i = 0; i < k; ++i){
            if (mask & (1 << i)) num_deleted_digit++;
            else Ntmp.push_back(digits[k-(i+1)]);
        }
        for(int i = 0; i < Ntmp.size(); ++i) sum += Ntmp[i]; 
        if (sum == 0) continue;
        if (sum % 3 == 0) change_digits = min(change_digits, num_deleted_digit);
    }

    if (change_digits == MAX){
        cout << -1 << endl;
    } else {
        cout << change_digits << endl;
    }

    return 0;
}
