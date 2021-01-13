#include <bits/stdc++.h>

using namespace std;

int main(){
    int A, B;
    cin >> A >> B;

    vector<int> n(6);
    int s1, s2;
    n[0] = A / 100;
    n[1] = (A - n[0] * 100) / 10;
    n[2] = A - n[0] * 100 - n[1] * 10;
    n[3] = B / 100;
    n[4] = (B - n[3] * 100) / 10;
    n[5] = B - n[3] * 100 - n[4] * 10;

    s1 = n[0] + n[1] + n[2];
    s2 = n[3] + n[4] + n[5];

    if(s1 >= s2) cout << s1 << endl;
    else cout << s2 << endl;
    return 0;
}
