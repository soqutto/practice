#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int H, W, X, Y;
    cin >> H >> W >> X >>Y;
    X--; Y--;

    vector<string> S(H);
    for(auto& s: S) cin >> s;

    int ans = 1;

    // 行
    for(int c=Y+1; c<W; ++c){ if(S[X][c] == '#') break; ans++; }
    for(int c=Y-1; c>=0; --c){ if(S[X][c] == '#') break; ans++; }
    // 列
    for(int r=X+1; r<H; ++r){ if(S[r][Y] == '#') break; ans++; }
    for(int r=X-1; r>=0; --r){ if(S[r][Y] == '#') break; ans++; }

    cout << ans << endl;

    return 0;
}
