#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    string S;
    cin >> N >> S;

    int abc_num = 0;

    for(int i=0; i<S.size()-2; ++i){
        if(S.substr(i, 3) == "ABC") abc_num++;
    }
    
    cout << abc_num << endl;
    return 0;
}
