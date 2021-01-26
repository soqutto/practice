#include <bits/stdc++.h>

using namespace std;

int64_t parse_exp(stack<string> s){
    if(s.top() == "OR"){
        if(s.size() == 1) return 3;
        else {
            s.pop();
            int64_t rtn = parse_exp(s);
            return (int64_t)pow(2, s.size()+1) + rtn;
        }
    } else /* s.top() == "AND" */{
        if(s.size() == 1) return 1;
        else {
            s.pop();
            int64_t rtn = parse_exp(s);
            return rtn;
        }
    }
}

int main(){
    int N;
    cin >> N;
    vector<string> S_tmp(N);
    stack<string> S;
    for(int i=0; i<N; ++i){
        cin >> S_tmp[i];
        S.push(S_tmp[i]);
    }

    int64_t ans = parse_exp(S);

    cout << ans << endl;

    return 0;
}
