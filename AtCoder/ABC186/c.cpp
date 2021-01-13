#include <bits/stdc++.h>

using namespace std;

bool contain_seven(string s){
    for(int i = 0; i < s.length(); ++i){
        if(s[i] == '7') return true;
    }
    return false;
}

int main(){
    int N;
    cin >> N;

    int num_no7 = 0;

    for(int i = 1; i <= N; ++i){
        stringstream ss1, ss2;
        ss1 << dec << i;
        ss2 << oct << i;
        string s1 = ss1.str();
        string s2 = ss2.str();
        if(!contain_seven(s1) && !contain_seven(s2)) num_no7++;
    }

    cout << num_no7 << endl;

    return 0;
}
