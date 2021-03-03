#include <bits/stdc++.h>

using namespace std;

int test_cond(vector<int> balls, vector<int> A, vector<int> B){
    int ret = 0;
    for(int i=0; i<A.size(); ++i){
        if(balls[A[i]-1] != 0 && balls[B[i]-1] != 0) ret++;
    }
    return ret;
}

int main(){
    int N, M;
    cin >> N >> M;

    vector<int> A(M), B(M);
    for(int i=0; i<M; ++i) cin >> A[i] >> B[i];

    int K;
    cin >> K;

    vector<int> C(K), D(K);
    for(int i=0; i<K; ++i) cin >> C[i] >> D[i];

    int max_true_conds = 0;

    for(int i=0; i < (1 << K); ++i){
        vector<int> balls(N);
        bitset<16> bits(i);
        for(int j=0; j < K; ++j){
            if(bits[j]) balls[C[j]-1]++;
            else balls[D[j]-1]++;
        }
        max_true_conds = max(max_true_conds, test_cond(balls, A, B));
    }

    cout << max_true_conds << endl;

    return 0;
}
