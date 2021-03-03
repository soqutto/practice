#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int64_t f(int64_t a){
    string s1, s2;
    s1 = to_string(a);
    s2 = s1;
    sort(ALL(s1));
    sort(ALL(s2), greater<int64_t>());
    int64_t i1, i2;
    i1 = stoll(s1);
    i2 = stoll(s2);
    return i2-i1;
}

int main(){
    int64_t N; cin >> N;
    int64_t K; cin >> K;

    int64_t n = N;
    for(int i=0; i<K; ++i){
        n = f(n);
    }

    cout << n << endl;
    return 0;
}
