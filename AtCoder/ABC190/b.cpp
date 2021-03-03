#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, S, D;
    cin >> N >> S >> D;

    vector<int> X(N), Y(N);
    for(int i=0; i<N; ++i) cin >> X[i] >> Y[i];

    bool isDamaged = false;
    for(int i=0; i<N; ++i){
        if (X[i] < S && Y[i] > D) isDamaged = true;
    }

    if(isDamaged)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
