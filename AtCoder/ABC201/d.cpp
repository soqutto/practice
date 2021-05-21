#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
  int H, W;
  cin >> H >> W;
  vector<string> board(H);
  for(auto& s: board) cin >> s;

  // Takahashi - Aoki difference board
  vector<vector<int>> diff_board(H, vector<int>(W));

  if((H+W) % 2) diff_board[H-1][W-1] = (board[H-1][W-1] == '+' : -1 : 1);
  else diff_board[H-1][W-1] = (board[H-1][W-1] == '+' : 1 : -1);

  for(int i=H+W-1; i>0; --i){
    bool aoki_hand = i%2 ? true : false;
    bool takahashi_hand = !aoki_hand;
    for(int h = max(0, i-W+1), w = max(0, i-H+1)
  }

  return 0;
}
