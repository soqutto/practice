#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int64_t N; cin >> N;
    int64_t ans = 0;

    int64_t base = 100;
    int64_t base9 = 9;

    while(true){
        if(N >= base){
            ans += base9;
            base *= 100;
            base9 *= 10;
        } else {
            int nums = to_string(base-1).size();
            int block_nums = nums / 2;

            if(to_string(N).size() < nums) break;
            int64_t start = 1;
            for(int i=0; i<block_nums-1; ++i) start *= 10;
            int64_t end = start * 10 - 1;

            for(int n = start; n <= end; ++n){
                string ns = to_string(n);
                int64_t num = stoll(ns + ns);
                if(num > N) break;
                else ans++;
            }
            break;
        }
    }

    cout << ans << endl;

    return 0;
}
