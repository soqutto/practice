#include <bits/stdc++.h>

using namespace std;

int main(){
    int H, W;
    cin >> H >> W;

    vector<vector<int>> A(H, vector<int>(W));
    int min_block = 101;
    for(int i = 0; i < H; ++i){
        for(int j = 0; j < W; ++j){
            cin >> A[i][j];
            min_block = min(min_block, A[i][j]);
        }
    }

    int rid_blocks = 0;

    for(int i = 0; i < H; ++i){
        for(int j = 0; j < W; ++j){
            rid_blocks += A[i][j] - min_block;
        }
    }

    cout << rid_blocks << endl;

    return 0;
}
