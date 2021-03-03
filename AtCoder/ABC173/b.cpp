#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int N; cin >> N;
    vector<string> S(N);
    vector<int> C(4, 0);
    for(auto& s: S){
        cin >> s;
        if(s == "AC") C[0]++;
        else if(s == "WA") C[1]++;
        else if(s == "TLE") C[2]++;
        else if(s == "RE") C[3]++;
    }
    cout << "AC x " << C[0] << endl;
    cout << "WA x " << C[1] << endl;
    cout << "TLE x " << C[2] << endl;
    cout << "RE x " << C[3] << endl;
    return 0;
}
