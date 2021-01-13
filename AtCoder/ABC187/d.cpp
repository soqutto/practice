#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> A(N), B(N);
    for(int i = 0; i < N; ++i) cin >> A[i] >> B[i];

    int64_t sum = 0;
    vector<int64_t> pts(N);
    for(auto& a: A) sum += a;
    for(int i = 0; i < N; ++i) pts[i] = 2 * A[i] + B[i];

    int towns = 0;

    sort(pts.begin(), pts.end(), greater<int>());

    for(int i = 0; i < N; ++i){
        sum -= pts[i];
        towns++;
        if(sum < 0) break;
    }

    cout << towns << endl;


    return 0;
}
