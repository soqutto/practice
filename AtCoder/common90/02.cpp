#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
  int N; cin >> N;
  if(N % 2 != 0){
    return 0;
  }

  vector<string> patterns;

  for(int i=0; i<(1<<N); ++i){
    string s = "";
    for(int j=0; j<N; ++j){
      if(((1 << j) & i) >> j)
        s += '(';
      else
        s += ')';
    }
    int opened_bracket_num = 0;
    bool correct_pattern = true;
    for(int j=0; j<s.size(); ++j){
      if(s[j] == '(') opened_bracket_num++;
      else if(s[j] == ')' && opened_bracket_num) opened_bracket_num--;
      else correct_pattern = false;
    }

    if(correct_pattern && !opened_bracket_num) patterns.push_back(s);
  }
  sort(ALL(patterns));
  for(auto s: patterns){
    cout << s << endl;
  }
  return 0;
}
