#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    string s; cin >> s;
    deque<char> ns;
    bool reversed = false;

    for(int i=0; i<s.length(); ++i){
        if(s[i] == 'R'){
            reversed = !reversed;
            continue;
        }
        if(reversed){
            ns.push_front(s[i]);
        } else {
            ns.push_back(s[i]);
        }
    }

    if(reversed){
        reverse(ALL(ns));
    }

    vector<char> ans_vec;
    stack<char> stk;

    for(auto it = ns.begin(); it != ns.end(); ++it){
        if(!stk.empty() && *it == stk.top()){
            ans_vec.pop_back();
            stk.pop();
        } else {
            ans_vec.push_back(*it);
            stk.push(*it);
        }
    }

    string ans(ALL(ans_vec));

    cout << ans << endl;

    return 0;
}