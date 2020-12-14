#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, T;
    int M;

    cin >> N >> M >> T;

    vector<int> A(M);
    vector<int> B(M);
    for(int i = 0; i < M; ++i) cin >> A[i] >> B[i];

    bool returnable = true;
    int batt = N;

    int i = 0;
    batt -= A[0];
    if(batt <= 0) returnable = false;

    while(returnable && i < M-1){
        batt += B[i] - A[i];
        if(batt > N) batt = N;

        batt -= A[i+1] - B[i];
        if(batt <= 0) returnable = false;
        ++i;
    }

    if(returnable){
        batt += B[M-1] - A[M-1];
        if(batt > N) batt = N;

        batt -= T - B[M-1];
        if(batt <= 0) returnable = false;
    }

    if(returnable){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
