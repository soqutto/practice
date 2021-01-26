#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  int max_height = max(max(A, B), C);
  int min_height = min(min(A, B), C);

  cout << max_height - min_height << endl;
}

