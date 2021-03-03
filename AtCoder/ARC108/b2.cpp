#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int N; cin >> N;
    string s; cin >> s;

    string fox_stack;
    int deletion_len = 0;
    
    for(int ptr=0; ptr<N; ++ptr){
        fox_stack += s[ptr];
        if(fox_stack.size() >= 3){
            if(fox_stack.substr(fox_stack.size()-3, 3) == "fox"){
                fox_stack.erase(fox_stack.size()-3);
            }
        }
    }

    cout << fox_stack.size() << endl;
    return 0;
}
