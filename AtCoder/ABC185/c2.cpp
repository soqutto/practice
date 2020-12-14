#include <bits/stdc++.h>

using namespace std;

int main(){
    int L;
    cin >> L;

    vector<vector<uint64_t>> pascal(L, vector<uint64_t>(L));
    pascal[0][0] = 1;
    pascal[1][0] = 1;
    pascal[1][1] = 1;
    for(int i = 2; i < L; ++i){
        pascal[i][0] = 1;
        pascal[i][i] = 1;
        for(int j = 1; j <= i-1; ++j){
            pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
        }
    }

    cout << pascal[L-1][11];

    return 0;
}
