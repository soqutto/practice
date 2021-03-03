#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()

using namespace std;

int main(){
    string s;
    cin >> s;
    if(s[s.length()-1] == 's')
        s += "es";
    else
        s += 's';

    cout << s << endl;
    return 0;
}
