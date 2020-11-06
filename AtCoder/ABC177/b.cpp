#include <bits/stdc++.h>

using namespace std;

int main(){
    string S, T;
    cin >> S;
    cin >> T;

    int iter = S.size() - T.size() + 1;
    int change_min = T.size();

    for(int i = 0; i < iter; ++i){
        int change_chars = 0;
        for(int j = 0; j < T.size(); ++j){
            if(S[i+j] != T[j]) ++change_chars;
        }
        change_min = min(change_min, change_chars);
    }

    cout << change_min << endl;

    return 0;
}
