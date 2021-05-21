#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
  string s; cin >> s;
  vector<int> memory(10);
  for(int i=0; i<10; ++i){
    if(s[i] == 'o') memory[i] = 1;
    else if(s[i] == 'x') memory[i] = 0;
    else memory[i] = 2;
  }

  int ans = 0;

  for(int i=0; i<10000; ++i){
    ostringstream oss;
    oss << setfill('0') << setw(4) << i;
    string s = oss.str();
    bool correct = true;
    for(char c: s){
      int cint = c -'0';
      if(memory[cint] == 0){
        correct = false;
        break;
      }
    }
    for(int i=0; i<10; ++i){
      bool contain = false;
      if(memory[i] == 1){
        for(char c: s){
          if(c - '0' == i) contain = true;
        }
        if(!contain){
          correct = false;
          break;
        }
      }
    }
    if(correct) ans++;
  }
  cout << ans << endl;
  return 0;
}
