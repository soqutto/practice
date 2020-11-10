#include <bits/stdc++.h>

using namespace std;

int main(){
    int A, B;
    cin >> A >> B;

    int follow_limit = 2 * A + 100;
    int follow = follow_limit - B;

    cout << follow << endl;
    return 0;
}
