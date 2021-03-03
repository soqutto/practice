#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> A(N);
    for(auto& a: A) cin >> a;

    vector<int64_t> pos_accum(N);
    vector<int64_t> pos_end(N);

    pos_accum[0] = A[0];
    for(int i=1; i<N; ++i) pos_accum[i] = pos_accum[i-1] + A[i];

    pos_end[0] = A[0];
    for(int i=1; i<N; ++i) pos_end[i] = pos_end[i-1] + pos_accum[i];

    int64_t ans = *max_element(pos_accum.begin(), pos_accum.end()) +
                  *max_element(pos_end.begin(), pos_end.end());

    if(ans < 0) ans = 0;

    cout << ans << endl;

    return 0;
}
