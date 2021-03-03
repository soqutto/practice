#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int N;

int recursive_parser(string& s, int& ptr){
    int ret = 0;
    while(true){
        ptr++;
        if(ptr == N) return ret;
        if(s[ptr] == 'f'){
            ret += recursive_parser(s, ptr);
        } else if(s[ptr] == 'o'){
            while(true){
                ptr++;
                if(s[ptr] == 'f') ret += recursive_parser(s, ptr);
                else if(s[ptr] == 'x') return ret+3;
                else return ret;
            }
        } else {
            return ret;
        }
    }
}


int main(){
    cin >> N;
    string s; cin >> s;

    int deletion_len = 0;
    int ptr = 0;
    while(ptr < s.length()){
        if(s[ptr] == 'f'){
            deletion_len += recursive_parser(s, ptr);
        }
        ptr++;
    }
    cout << N-deletion_len << endl;
    return 0;
}
