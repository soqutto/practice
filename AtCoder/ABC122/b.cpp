#include <bits/stdc++.h>

using namespace std;

int main(){
    string S;
    cin >> S;

    int maxlen_ACGT = 0;
    for(int i=0; i<S.size(); ++i){
        for(int j=0; j<=S.size(); ++j){
            string s = S.substr(i, j);
            bool contain_except_ACGT = false;
            for(int k=0; k<s.size(); ++k){
                if(s[k] != 'A' && s[k] != 'C' && s[k] != 'G' && s[k] != 'T')
                    contain_except_ACGT = true;
            }
            if(!contain_except_ACGT)
                maxlen_ACGT = max(maxlen_ACGT, (int)s.size());
        }
    }

    cout << maxlen_ACGT << endl;
    return 0;
}
