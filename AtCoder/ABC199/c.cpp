#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

void charswap(string& a, string& b, int ai, int bi){
    char tmp = a[ai];
    a[ai] = b[bi];
    b[bi] = tmp;
}

int main(){
    int N; cin >> N;
    string S; cin >> S;
    int Q; cin >> Q;

    string s1, s2;
    s1 = S.substr(0, N);
    s2 = S.substr(N, N);

    bool flipped = false;

    for(int i=0; i<Q; ++i){
        int t; cin >> t;
        int a, b; cin >> a >> b;
        a--; b--;

        if(t == 2){
            flipped = !flipped;
        } else {
            if(a < N && b < N){
                if(flipped){
                    charswap(s2, s2, a, b);
                } else {
                    charswap(s1, s1, a, b);
                }
            } else if(a < N && b >= N){
                if(flipped){
                    charswap(s2, s1, a, b-N);
                } else {
                    charswap(s1, s2, a, b-N);
                }
            } else {
                if(flipped){
                    charswap(s1, s1, a-N, b-N);
                } else {
                    charswap(s2, s2, a-N, b-N);
                }
            }
        }
    }

    if(flipped){
        cout << s2 << s1 << endl;
    } else {
        cout << s1 << s2 << endl;
    }

    return 0;
}
