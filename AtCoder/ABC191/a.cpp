#include <bits/stdc++.h>

using namespace std;

int main(){
    int V, T, S, D;
    cin >> V >> T >> S >> D;

    int vanish_start = V*T;
    int vanish_end = V*S;

    if(vanish_start > D || vanish_end < D){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
