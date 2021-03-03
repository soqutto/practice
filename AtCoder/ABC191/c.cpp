#include <bits/stdc++.h>

using namespace std;

int main(){
    int H, W;
    cin >> H >> W;

    vector<string> S(H);
    for(auto& s: S) cin >> s;

    int vertices = 0;
    for(int i=0; i<H-1; ++i){
        for(int j=0; j<W-1; ++j){
            int black = 0;
            if(S[i][j] == '#') black++;
            if(S[i][j+1] == '#') black++;
            if(S[i+1][j] == '#') black++;
            if(S[i+1][j+1] == '#') black++;

            if(black == 1 || black == 3) vertices++;
        }
    }

    cout << vertices << endl;

    return 0;
}
