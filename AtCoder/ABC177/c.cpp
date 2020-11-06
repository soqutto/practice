#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> A(N);
    for(auto& a: A) cin >> a;

    const int mod = (int)pow(10.0, 9) + 7;
    int64_t sum = 0;

    vector<int64_t> row_sum(N);

    // sum table creation
    for(int i = N-1; i > 0; --i){
        row_sum[i-1] = (row_sum[i] + A[i]) % mod;
    }

    for(int i = 0; i < N-1; ++i){
        sum += (int64_t)A[i] * row_sum[i];
        sum %= mod;
    }

    cout << sum << endl;

    return 0;
}
