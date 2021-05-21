#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
  int N; cin >> N;
  vector<pair<int, string>> ts(N);
  for(auto& [t, s] : ts) cin >> s >> t;
  sort(ALL(ts));
  cout << ts[N-2].second << endl;
  return 0;
}
