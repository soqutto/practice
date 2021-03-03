#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int H, W, K;
    cin >> H >> W >> K;
    vector<vector<char>> board(H, vector<char>(W));
    for(int i=0; i<H; ++i){
        string s; cin >> s;
        for(int j=0; j<W; ++j) board[i][j] = s[j];
    }

    int ans = 0;
    for(int i=0; i<(1<<H)-1; ++i){
        for(int j=0; j<(1<<W)-1; ++j){
            bitset<6> h(i);
            bitset<6> v(j);
            int black = 0;
            for(int k=0; k<H; ++k){
                if(h[k]) continue;
                for(int l=0; l<W; ++l){
                    if(v[l]) continue;
                    if(board[k][l] == '#') black++;
                }
            }
            if(black == K) ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
