#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> P(N);
    vector<int> Q(N);
    vector<int> R(N);

    for(auto& p: P) cin >> p;
    for(auto& q: Q) cin >> q;
    for(int i=0; i<N; ++i) R[i] = i+1;

    int a, b, n = 1;
    do{
        bool eqP = true, eqQ = true;
        for(int i=0; i<N; ++i){
            if(P[i] != R[i]){
                eqP = false;
            }
            if(Q[i] != R[i]){
                eqQ = false;
            }
        }
        if(eqP) a = n;
        if(eqQ) b = n;
        ++n;
    } while (next_permutation(R.begin(), R.end()));

    cout << abs(a-b) << endl;

    return 0;
}
