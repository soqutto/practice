#include <bits/stdc++.h>

using namespace std;

int main(){
    int H, W, N, M;
    cin >> H >> W >> N >> M;

    vector<pair<int, int>> light(N);
    vector<pair<int, int>> block(M);
    vector<vector<bool>> blocked(H, vector<bool>(W));
    for(auto& [a, b]: light){ cin >> a >> b; a--; b--; }
    for(auto& [c, d]: block){ cin >> c >> d; c--; d--; blocked[c][d] = true;}

    vector<vector<bool>> lightedH(H, vector<bool>(W));
    vector<vector<bool>> lightedV(H, vector<bool>(W));

    for(int i=0; i<N; ++i){
        int y = light[i].first;
        int x = light[i].second;
        if(!lightedH[y][x]){
            lightedH[y][x] = true;
            for(int j=x+1; j < W  && blocked[y][j] != true; ++j) lightedH[y][j] = true;
            for(int j=x-1; 0 <= j && blocked[y][j] != true; --j) lightedH[y][j] = true;
        }
        if(!lightedV[y][x]){
            lightedV[y][x] = true;
            for(int j=y+1; j < H  && blocked[j][x] != true; ++j) lightedV[j][x] = true;
            for(int j=y-1; 0 <= j && blocked[j][x] != true; --j) lightedV[j][x] = true;
        }
    }

    int lightedSquare = 0;
    for(int i=0; i<H; ++i){
        for(int j=0; j<W; ++j){
            if(lightedH[i][j] || lightedV[i][j]) lightedSquare++;
        }
    }

    cout << lightedSquare << endl;

    return 0;
}
