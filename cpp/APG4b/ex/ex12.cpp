#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int num = 1;

  int i = 1;
  while(i < S.size()){
      char c = S.at(i);
      if(c == '+'){
          num++;
      } else if(c == '-'){
          num--;
      }
      i += 2;
  }

  cout << num << endl;
}
