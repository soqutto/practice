#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    string S;
    cin >> N >> S;

    int pin_patterns = 0;
    
    for(int i = 0; i <= 999; ++i){
        char pin_c[4];
        sprintf(pin_c, "%03d", i);
        string pin(pin_c, 3);

        auto it1 = find(S.begin(), S.end(), pin[0]);
        if(it1 != S.end()){
            auto it2 = find(it1+1, S.end(), pin[1]);
            if(it2 != S.end()){
                auto it3 = find(it2+1, S.end(), pin[2]);
                if(it3 != S.end()){
                    pin_patterns++;
                }
            }
        }
    }

    cout << pin_patterns << endl;

    return 0;
}
