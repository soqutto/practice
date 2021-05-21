#include <bits/stdc++.h>
#include <unistd.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int N, L; cin >> N >> L;
    int K; cin >> K;
    vector<int> A(N);
    for(auto& a: A) cin >> a;

    int left = 0;
    int right = L;
    int objective;
    int objective_max = 0;
    while(left <= right){
        objective = left + (right - left) / 2;
        int pieces = 0; 
        int piece_left = 0;
        for(auto a: A){
            if(pieces < K && a - piece_left >= objective){
                pieces++;
                piece_left = a;
            }
        }
        if(L - piece_left >= objective) pieces++;

        if(pieces == K+1){
            chmax(objective_max, objective);
            left = objective + 1;
        } else {
            right = objective - 1;
        }
    }

    cout << objective_max << endl;
    return 0;
}
