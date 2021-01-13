#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;

    vector<vector<int>> P(N, vector<int>(2));
    for(int i = 0; i < N; ++i){
        cin >> P[i][0] >> P[i][1];
    }

    int pts = 0;

    for(int i = 0; i < N-1; ++i){
        for(int j = i+1; j < N; ++j){
            double k = (double)(P[i][1] - P[j][1]) / (P[i][0] - P[j][0]);
            if(k >= -1 && k <= 1) pts++;
        }
    }

    cout << pts << endl;

    return 0;
}
