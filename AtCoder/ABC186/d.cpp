#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;

    vector<long long int> A(N);
    for(auto& a: A) cin >> a;

    sort(A.begin(), A.end());

    vector<long long int> summem(N);
    summem[0] = A[0];
    for(int i = 1; i < N; ++i) summem[i] = summem[i-1] + A[i];

    long long int sum = 0LL;

    for(int i = 0; i < N-1; ++i){
        sum += (summem[N-1] - summem[i]) - A[i] * (N-i-1);
    }

    cout << sum << endl;

    return 0;
}
