#include <iostream>
#include <string>

using namespace std;

void output_result(bool b){
    if (b){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

int main(){
    string S;
    cin >> S;
    int size = S.size();
    bool eight = false;

    if(size == 1){
        if (S[0] - '0' == 8){
            eight = true;
        }
        output_result(eight);
        return 0;

    } else if (size == 2){
        int num = stoi(S);
        int num2 = stoi(S.substr(1,1) + S.substr(0,1));
        if (num % 8 == 0 || num2 % 8 == 0){
            eight = true;
        }
        output_result(eight);
        return 0;

    } else {
        for(int i = 0; i < size; ++i){
            for(int j = 0; j < size; ++j){
                for(int k = 0; k < size; ++k){
                    if (i == j || j == k || k == i) continue;
                    int num = 100 * (S[i] - '0') + 10 * (S[j] - '0') + (S[k] - '0');
                    if (num % 8 == 0){
                        eight = true;
                        goto BREAK_LOOP;
                    }
                }
            }
        }
BREAK_LOOP:
        output_result(eight);

    }


    return 0;
}
