#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

#define INF (1e7)

int main(){
    int N, M, X;
    cin >> N >> M >> X;
    vector<int> C(N);
    vector<vector<int>> A(N, vector<int>(M));
    for(int i=0; i<N; ++i){
        cin >> C[i];
        for(auto& a: A[i]) cin >> a;
    }

    int min_price = INF;

    for(int i=1; i < (1 << N); ++i){
        vector<int> cog(M);
        int price = 0;
        for(int j=0; j<N; ++j){
            if((i >> j) & 1){
                for(int k=0; k<M; ++k) cog[k] += A[j][k];
                price += C[j];
            }
        }
        bool satisfiable = true;
        for(int j=0; j<M; ++j){
            if(cog[j] < X){
                satisfiable = false;
                break;
            }
        }
        if(satisfiable) chmin(min_price, price);
    }
    if(min_price == INF) min_price = -1;
    cout << min_price << endl;
    return 0;
}
