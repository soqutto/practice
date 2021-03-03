#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int K; cin >> K;
    string S, T; cin >> S >> T;

    vector<int64_t> remain_cards(10, K);
    vector<int> hands_s(10, 0);
    vector<int> hands_t(10, 0);
    int64_t pt_s = 0;
    int64_t pt_t = 0;

    for(int i=0; i<4; ++i){
        remain_cards[S[i] - '0']--;
        remain_cards[T[i] - '0']--;
        hands_s[S[i]-'0']++;
        hands_t[T[i]-'0']++;
    }

    for(int i=1; i<=9; ++i){
        int b = 1;
        for(int j=0; j<hands_s[i]; ++j) b *= 10;
        pt_s += i * b;
    }
    for(int i=1; i<=9; ++i){
        int b = 1;
        for(int j=0; j<hands_t[i]; ++j) b *= 10;
        pt_t += i * b;
    }

    int64_t m = 0;
    for(int i=1; i<=9; ++i) m += remain_cards[i];
    m *= m-1;

    int64_t c = 0;

    for(int i=1; i<=9; ++i){
        if(remain_cards[i] == 0) continue;
        for(int j=1; j<=9; ++j){
            if(i == j && remain_cards[j] == 1) continue;
            int b1 = 1, b2 = 1;
            for(int k=0; k<hands_s[i]; ++k) b1 *= 10;
            for(int k=0; k<hands_t[j]; ++k) b2 *= 10;
            int64_t pt_diff_s = 9 * i * b1;
            int64_t pt_diff_t = 9 * j * b2;
            if(pt_s + pt_diff_s > pt_t + pt_diff_t){
                if(i == j) c += remain_cards[i] * (remain_cards[i]-1);
                else c += remain_cards[i] * remain_cards[j];
            }
        }
    }

    cout << fixed << setprecision(15);
    cout << (double)c / (double)m << endl;

    return 0;
}
