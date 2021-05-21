#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
  int H, W;
  cin >> H >> W;
  vector<vector<int>> A(H, vector<int>(W));
  vector<vector<int>> B(H, vector<int>(W));

  for(auto& row: A){
    for(auto& cell: row){
      cin >> cell;
    }
  }

  vector<int> row_sum(H);
  vector<int> column_sum(W);

  for(int i=0; i<H; ++i){
    for(auto cell: A[i]){
      row_sum[i] += cell;
    }
  }

  for(int i=0; i<W; ++i){
    for(int j=0; j<H; ++j){
      column_sum[i] += A[j][i];
    }
  }

  for(int i=0; i<H; ++i){
    for(int j=0; j<W; ++j){
      B[i][j] = row_sum[i] + column_sum[j] - A[i][j];
    }
  }

  for(auto row: B){
    for(auto cell : row){
      cout << cell << " ";
    }
    cout << endl;
  }

  return 0;
}
