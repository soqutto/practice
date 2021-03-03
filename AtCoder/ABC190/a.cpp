#include <bits/stdc++.h>

using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;

    bool win_takahashi = false;
    if(C == 0){
        if(A > B) win_takahashi = true;
    } else {
        if(A >= B) win_takahashi = true;
    }

    if(win_takahashi) cout << "Takahashi" << endl;
    else cout << "Aoki" << endl;
        
    return 0;
}
