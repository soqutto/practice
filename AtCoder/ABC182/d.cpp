#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> A(N);
    for(auto& a: A) cin >> a;

    vector<int> move_offset(N+1);
    vector<int> max_move_offset(N+1);

    for(int i = 1; i <= N; ++i){
        move_offset[i] = move_offset[i-1] + A[i-1];
        max_move_offset[i] = max(max_move_offset[i-1], move_offset[i-1] + A[i-1]); 
    }

    int ans = 0;
    int x = 0;
    for(int i = 1; i <= N; ++i){
        ans = max(ans, x + max_move_offset[i]);
        x += move_offset[i];
    }

    cout << ans << endl;

    return 0;
}
