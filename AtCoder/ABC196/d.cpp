#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int H, W, A, B;
int ans = 0;

void dfs(unsigned int bit, int pos, int a, int b){
    if(pos == H*W){
        ans++;
        return;
    }

    if (bit & (1 << pos)){
        dfs(bit, pos + 1, a, b);
        return;
    } else {
        if (a != 0) {
            if (pos % W <= W - 2 && !(bit & (1 << pos))) {
                unsigned int bitc = bit;
                bitc |= (1 << pos);
                bitc |= (1 << (pos + 1));
                dfs(bitc, pos + 2, a - 1, b);
            }

            if (pos / W <= H - 2) {
                unsigned int bitc = bit;
                bitc |= (1 << pos);
                bitc |= (1 << (pos + W));
                dfs(bitc, pos + 1, a - 1, b);
            }
        }

        if (b != 0) {
            unsigned int bitc = bit;
            bitc |= (1 << pos);
            dfs(bitc, pos + 1, a, b - 1);
        }
    }
}


int main(){
    cin >> H >> W >> A >>B;

    dfs(0, 0, A, B);
    cout << ans << endl;
    return 0;
}
