#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;


int main(){
    int N; cin >> N;
    vector<int> A(N);
    for(auto& a: A) cin >> a;

    int min_xor = 1 << 30;
    for(int i=0; i<(1<<N-1); ++i){
        bitset<19> b(i);
        int orint = 0;
        int xorint = 0;

        for(int i=0; i<N; ++i){
            orint |= A[i];
            if(b[i] || i==N-1){
                xorint ^= orint;
                orint = 0;
            }
        }

        chmin(min_xor, xorint);

    }
    cout << min_xor << endl;

    return 0;
}
