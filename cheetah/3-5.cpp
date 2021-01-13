#include <bits/stdc++.h>

using namespace std;

void countStrings(vector<string> s);

void countStrings(vector<string> s){
    map<string, int> m;
    for(int i = 0; i < s.size(); ++i){
        m[s[i]]++;
    }

    map<string, int>::iterator it = m.begin();
    while(it != m.end()){
        cout << (*it).first << "" << (*it).second << endl;
        ++it;
    }
}

int main(){
    vector<string> s = {"abc", "def", "abc", "st", "st", "st"};
    countStrings(s);

    return 0;
}
