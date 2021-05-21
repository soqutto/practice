#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    vector<int> B(M);
    for(auto& a: A) cin >> a;
    for(auto& b: B) cin >> b;

    set<int> st;
    for(auto a: A) st.insert(a);

    for(auto b: B){
        if(st.count(b) == 0){
            st.insert(b);
        } else {
            st.erase(b);
        }
    }

    for(auto e: st){
        cout << e << " ";
    }
    cout << endl;

    return 0;
}
