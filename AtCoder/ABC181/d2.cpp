#include <iostream>
#include <string>
#include <vector>

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
        vector<int> num_appears(10);
        for(int i = 0; i < size; i++){
            num_appears[S[i] - '0']++;
        }

        for(int n = 112; n < 1000; n += 8){
            string s = to_string(n);
            vector<int> num_appears_8mul(10);
            for(int i = 0; i <= 2; i++){
                num_appears_8mul[s[i] - '0']++;
            }
            for(int i = 0; i < 10; i++){
                if (!(num_appears[i] >= num_appears_8mul[i])){
                    eight = false;
                    break;
                } else {
                    eight = true;
                }
            }
            if(eight){
                output_result(eight);
                return 0;
            }
        }

        output_result(eight);
        
    }

    return 0;
}
