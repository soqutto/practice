#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;

    vector<string> S(N);
    for(auto& s: S){
        cin >> s;
    }

    unordered_set<string> HS(S.begin(), S.end());

    for(auto& s: S){
        if(HS.count("!" + s)){
            cout << s << endl;
            return 0;
        }
    }

    cout << "satisfiable" << endl;


    return 0;
}
