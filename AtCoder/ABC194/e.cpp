#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    for(auto& a: A) cin >> a;

    map<int> m;
    vector<int> mex(N-M+1);

    for(int i=0; i<M; ++i) m[A[i]]++;

    for(int i=0; i<N-M; ++i){
        m[A[i]]--;
        m[A[M+i]]++;
    }


    return 0;
}
