#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
  vector<int> A(3);
  for(auto& a: A) cin >> a;
  sort(ALL(A));

  cout << (A[2] - A[1] == A[1] - A[0] ? "Yes" : "No") << endl;
  return 0;
}
