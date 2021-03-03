#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> A(N);
    for(auto& a: A) cin >> a;

    vector<int64_t> pos_accum(N);
    vector<int64_t> offset_max(N);
    vector<int64_t> pos_end(N);

    pos_accum[0] = A[0];
    offset_max[0] = max(0, A[0]);
    pos_end[0] = A[0];
    for(int i=1; i<N; ++i) pos_accum[i] = pos_accum[i-1] + A[i];
    for(int i=1; i<N; ++i) offset_max[i] = max(offset_max[i-1], pos_accum[i]);
    for(int i=1; i<N; ++i) pos_end[i] = pos_end[i-1] + pos_accum[i];

    int64_t ans = 0;
    int64_t pos = 0;
    for(int i=0; i<N; ++i){
        ans = max(ans, pos + offset_max[i]);
        pos = pos_end[i];
    }

    cout << ans << endl;

    return 0;
}
