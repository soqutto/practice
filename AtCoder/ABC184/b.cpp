#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, X;
    string S;
    cin >> N >> X;
    cin >> S;

    for(int i = 0; i < N; ++i){
        if(S[i] == 'x'){
            X = max(X-1, 0);
        } else {
            X++;
        }
    }

    cout << X;

    return 0;
}
