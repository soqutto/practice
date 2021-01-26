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
    vector<ll> ret(3);
    for(int i=0; i<3; ++i){
        for(int j=0; j<3; ++j){
            ret[i] += a1[i][j] * vec[j];
        }
    }
    return ret;
}

void print_mat(vector<vector<ll>> m){
    for(int i=0; i<3; ++i){
        for(int j=0; j<3; ++j){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

void print_vec(vector<ll> m){
    for(int i=0; i<3; ++i){
        cout << m[i] << " ";
    }
    cout << endl;
}
        

int main(){
    vector<vector<ll>> a1 = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<ll>> a2 = {{1,2,3},{4,5,6},{7,8,9}};
    print_mat(a1);
    vector<vector<ll>> a = prod_mat(a1, a2);
    print_mat(a);
    vector<ll> b = {1,4,7};
    vector<ll> c = prod_vec(a1, b);
    print_vec(c);
    return 0;
}
