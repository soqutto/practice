#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N;
    cin >> N;

    vector<int> n(20);
    int digits = 0;

    int mod3_0 = 0;
    int mod3_1 = 0;
    int mod3_2 = 0;

    int sum_of_alldigits = 0;
    int change_digits = 0;

    for(int i = 0;; ++i){
        n[i] = N % 10;

        sum_of_alldigits += n[i];

        int mod3 = n[i] % 3;
        if(mod3 == 0) mod3_0++;
        else if(mod3 == 1) mod3_1++;
        else mod3_2++;

        N /= 10;
        digits++;
        if (N == 0) break;
    }

    if(sum_of_alldigits % 3 == 0){
        change_digits = 0;
    } else if (sum_of_alldigits % 3 == 1){
        if (digits == 1){
            change_digits = -1;
        } else if (mod3_1 >= 1 && digits >= 2){
            change_digits = 1;
        } else if (mod3_2 >= 2 && digits >= 3){
            change_digits = 2;
        } else {
            change_digits = -1;
        }
    } else /* sum_of_alldigits % 3 == 2 */ {
        if (digits == 1){
            change_digits = -1;
        } else if (mod3_2 >= 1 && digits >= 2){
            change_digits = 1;
        } else if (mod3_1 >= 2 && digits >= 3){
            change_digits = 2;
        } else {
            change_digits = -1;
        }
    }

    cout << change_digits << endl;

    return 0;
}
