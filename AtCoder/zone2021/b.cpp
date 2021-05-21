#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int N, D, H;
    cin >> N >> D >> H;

    vector<int> d(N);
    vector<int> h(N);
    for(int i=0; i<N; ++i){
        cin >> d[i] >> h[i];
    }

    double max_height = 0.0;

    for(int i=0; i<N; ++i){
        double height = H - ((double)(H-h[i]) * D / (D-d[i]));
        if(height > 0) chmax(max_height, height);
    }

    cout << fixed << setprecision(15) << max_height << endl;
    return 0;
}
