#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> x(N);
    int64_t manhattan = 0;
    int64_t euclid_sum = 0;
    for(auto& i: x){
        cin >> i;
        i = abs(i);
        manhattan += i;
        euclid_sum += (int64_t)pow(i, 2);
    }

    double euclid = sqrt(euclid_sum);
    int64_t chebychev = *max_element(x.begin(), x.end());

    cout << manhattan << endl;
    cout << fixed << setprecision(15) << euclid << endl;
    cout << chebychev << endl;
}
