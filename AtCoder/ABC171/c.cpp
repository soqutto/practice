#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int64_t N; cin >> N; N--;
    string ans = "";

    int64_t l = 0, r = 26;
    int cnt = 1;
    int64_t bs = 26;
    int64_t st;
    while(true){
        if(l <= N && N < r){
            st = l+1;
            break;
        } else {
            bs *= 26;
            l = r;
            r = l + bs;
            cnt++;
        }
    }

    N -= st-1;

    int64_t bs1 = 1;
    for(int j=0; j<cnt-1; ++j) bs1 *= 26;
    for(int i=cnt; i>0; --i){
        int c = 'a' + N/bs1;
        ans += (char)c;
        N %= bs1;
        bs1 /= 26;
    }

    cout << ans << endl;
    return 0;
}
