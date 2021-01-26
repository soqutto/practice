#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  int Asum = 0;

  for(int i=0; i<N; ++i){
      cin >> A.at(i);
      Asum += A.at(i);
  }

  int average = Asum / N;

  for(int i=0; i<N; ++i){
      int out;
      if(A.at(i) >= average) out = A.at(i) - average;
      else out = average - A.at(i);

      cout << out << endl;
  }
}

