#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;

    vector<string> S(N);
    vector<string> EString, NEString;
    for(auto& s: S){
        cin >> s;
    }

    for(auto& s: S){
        if(s[0] == '!') EString.push_back(s.substr(1));
        else NEString.push_back(s);
    }

    if(EString.size() == 0 || NEString.size() == 0){
        cout << "satisfiable" << endl;
        return 0;
    } else {
        for(int i = 0; i < EString.size(); ++i){
            for(int j = 0; j < NEString.size(); ++j){
                if(EString[i] == NEString[j]){
                    cout << NEString[j] << endl;
                    return 0;
                }
            }
        }
    }
    cout << "satisfiable" << endl;

    return 0;
}
