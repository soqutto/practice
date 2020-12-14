#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    string T;
    string s = "110";

    long long int s_long = 10000000000;

    cin >> N;
    cin >> T;

    bool contain_110 = false;
    int begin_110;
    int end_110;
    int contain_110_num = 0;

    long long int out = 0;

    for(int i = 0; i < T.size()-2; ++i){
        if(T[i] == '1' && T[i+1] == '1' && T[i+2] =='0'){
            contain_110 = true;
            begin_110 = i;
            break;
        }
    }

    if(contain_110){
        for(int i = begin_110; i < T.size()-2; i += 3){
            if(T[i] == '1' && T[i+1] == '1' && T[i+2] == '0'){
                ++contain_110_num;
            } else {
                end_110 = i;
            }
        }

        if (begin_110 >= 3 || T.size()-end_110 >= 3){
            out = 0;
        } else {
            if(begin_110 == 0 && end_110 == T.size()-1){
                out = s_long / T.size();
            } else {
                if(begin_110 == 1){

        }
    } else {
    }


    cout << out << endl;

    return 0;
}
