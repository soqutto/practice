#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int A, B, W;
    cin >> A >> B >> W;

    int gW = W * 1000;

    int mx = 0;
    int mi = 1e8;

    int band = B-A;

    if(A > gW){
        cout << "UNSATISFIABLE" << endl;
    } else {
        int max_unit = gW / A;
        int min_unit = gW / B;
        for(int i=max_unit; i >= min_unit; --i){
            int remain_weight = gW - i*A;
            if((double)remain_weight / i <= band){
                chmax(mx, i);
                chmin(mi, i);
            }
        }

        if(mx == 0 || mi == 1e8){
            cout << "UNSATISFIABLE" << endl;
        } else {
            cout << mi << " " << mx << endl;
        }
    }
    return 0;
}
