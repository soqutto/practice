#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    string s; cin >> s;
    bool raining = false;
    int rd = 0;
    int rd_max = 0;
    for(int i=0; i<s.size(); ++i){
        if(s[i] == 'R'){
            raining = true;
            rd++;
            chmax(rd_max, rd);
        } else {
            if(raining){
                raining = false;
                rd = 0;
            }
        }
    }
    cout << rd_max << endl;
    return 0;
}
