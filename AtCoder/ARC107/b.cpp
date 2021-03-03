#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    
    int64_t ans = 0;
    for(int apb = 2; apb <= 2*N; ++apb){
        int pattern_ab;
        //pattern_ab = min(2*N-apb+1, apb-1);
        if(apb <= N+1) pattern_ab = apb-1;
        else pattern_ab = 2*N-apb+1;

        // c+d to be a+b-K
        int pattern_cd;
        int cpd = apb-K;
        if(cpd >= 2){
            if (cpd <= N+1) pattern_cd = cpd-1;
            else pattern_cd = max(0, 2*N-cpd+1);
        } else pattern_cd = 0;
        ans += (int64_t)pattern_ab * pattern_cd;
    }

    cout << ans << endl;
    return 0;
}
