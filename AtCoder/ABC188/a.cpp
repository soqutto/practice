#include <bits/stdc++.h>

using namespace std;

int main(){
    int X, Y;
    cin >> X >> Y;

    int a = max(X, Y);
    int b = min(X, Y);

    if(b + 3 > a) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
