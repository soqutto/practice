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

    int hands = 0;

    while(true){
        bool all_even = true;
        for(auto a: A) if(a % 2 != 0) all_even = false;

        if(!all_even) break;
        else {
            for(auto& a: A) a /= 2;
            hands++;
        }
    }
    cout << hands << endl;
    return 0;
}
