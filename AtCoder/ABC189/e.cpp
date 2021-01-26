#include <bits/stdc++.h>

using namespace std;

using ll = int64_t;

vector<vector<ll>> prod_mat(vector<vector<ll>> a1, vector<vector<ll>> a2){
    vector<vector<ll>> m(3, vector<ll>(3));
    for(int i=0; i<3; ++i){
        for(int j=0; j<3; ++j){
            for(int k=0; k<3; ++k){
                m[i][j] += a1[i][k] * a2[k][j];
            }
        }
    }

    return m;
}

vector<ll> prod_vec(vector<vector<ll>> a1, vector<ll> vec){
    vector<ll> ret(3, 0);
    for(int i=0; i<3; ++i){
        for(int j=0; j<3; ++j){
            ret[i] += a1[i][j] * vec[j];
        }
    }

    return ret;
}


int main(){
    ll N;
    cin >> N;
    vector<ll> X(N), Y(N);
    for(int i=0; i<N; ++i) cin >> X[i] >> Y[i];

    ll M;
    cin >> M;
    vector<int> op;
    map<int, ll> cood;
    for(int i=0; i<M; ++i){
        int o;
        cin >> o;
        op.push_back(o);
        if(o >= 3){
            cin >> o;
            cood[i] = o;
        }
    }

    int Q;
    cin >> Q;
    vector<ll> A(Q), B(Q);
    for(int i=0; i<Q; ++i) cin >> A[i] >> B[i];

    vector<vector<vector<ll>>> stat_matrix(M+1, vector<vector<ll>>(3, vector<ll>(3)));
    stat_matrix[0] = {{1,0,0},{0,1,0},{0,0,1}};

    for(int i=1; i<M+1; ++i){
        vector<vector<ll>> matrix_step(3, vector<ll>(3));
        if(op[i-1] == 1)
            matrix_step = {{0,1,0},{-1,0,0},{0,0,1}};
        else if(op[i-1] == 2)
            matrix_step = {{0,-1,0},{1,0,0},{0,0,1}};
        else if(op[i-1] == 3){
            ll p = cood[i-1];
            matrix_step = {{-1,0,p*2},{0,1,0},{0,0,1}};
        } else {
            ll p = cood[i-1];
            matrix_step = {{1,0,0},{0,-1,p*2},{0,0,1}};
        }
        stat_matrix[i] = prod_mat(matrix_step, stat_matrix[i-1]);
    }

    for(int i=0; i<Q; ++i){
        vector<ll> v = {X[B[i]-1], Y[B[i]-1], 1};
        vector<ll> ans = prod_vec(stat_matrix[A[i]], v);
        cout << ans[0] << " " << ans[1] << endl;
    }


    return 0;
}
