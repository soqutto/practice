#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, X;
    cin >> N >> X;

    vector<int> V(N), P(N);
    for(int i=0; i<N; ++i) cin >> V[i] >> P[i];

    int limit = X * 100;
    int alcohol = 0;
    int yoi = -1;
    for(int i=0; i<N; ++i){
        alcohol += V[i] * P[i];
        if (alcohol > limit){
            yoi = i+1;
            break;
        }
    }
    cout << yoi << endl;
    return 0;
}
