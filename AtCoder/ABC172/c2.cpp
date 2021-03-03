#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int N, M, K;
    cin >> N >> M >> K;

    vector<int> A(N);
    vector<int> B(M);
    for(auto& a: A) cin >> a;
    for(auto& b: B) cin >> b;

    vector<int64_t> sumA(N+1);
    for(int i=0; i<N; ++i) sumA[i+1] = sumA[i] + A[i];
    vector<int64_t> sumB(M+1);
    for(int i=0; i<M; ++i) sumB[i+1] = sumB[i] + B[i];

    int max_books = 0;

    auto it = sumB.rbegin();
    for(int i=0; i<=N; ++i){
        if(sumA[i] > K) break;
        while(true){
            if(sumA[i] + *it <= K){
                chmax(max_books, i+M-(int)distance(sumB.rbegin(), it));
                break;
            } else {
                ++it;
                continue;
            }
        }
    }
    cout << max_books << endl;
    return 0;
}
