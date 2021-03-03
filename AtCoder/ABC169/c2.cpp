#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int64_t A; cin >> A;
    string B; cin >> B;

    int del = B.find_first_of('.');
    int B_i = stoi(B.substr(0, del)) * 100;
    B_i += stoi(B.substr(del+1));

    int64_t ans = A * B_i / 100;
    cout << ans << endl;
    return 0;
}
