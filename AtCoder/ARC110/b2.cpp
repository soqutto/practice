#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    string T;
    cin >> N >> T;

    int64_t num_110 = 1e10;

    int64_t ans;

    if(N == 1){
        if(T == "1") ans = 2 * num_110;
        else ans = num_110;
    }else if(N == 2){
        if(T == "11" || T == "10") ans = num_110;
        else if(T == "01"){
            ans = num_110 - 1;
        } else /* T == "00" */{
            ans = 0;
        }
    }else if(N == 3){
        if(T == "110") ans = num_110;
        else if(T == "101" || T == "011") ans = num_110 - 1;
        else ans = 0;
    }else if(N == 4){
        if(T == "1101" || T == "1011" || T == "0110") ans = num_110 - 1;
        else ans = 0;
    }else{
        int begin_110 = -1, end_110 = -1;
        for(int i=0; i<N-2;){
            if(T.substr(i, 3) == "110"){
                if(begin_110 == -1) begin_110 = i;
                i += 3;
                end_110 = i;
            } else {
                if(end_110 != -1) break;
                i++;
            }
        }
        if(begin_110 == -1) ans = 0;
        else{
            string T_former_110, T_latter_110;
            T_former_110 = T.substr(0, begin_110);
            T_latter_110 = end_110 == N ? "" : T.substr(end_110);
            if(T_former_110.length() >= 3 || T_latter_110.length() >= 3) ans = 0;
            else{
                if(T_former_110 != "" && T_former_110 != "0" && T_former_110 != "10") ans = 0;
                else if(T_latter_110 != "" && T_latter_110 != "1" && T_latter_110 != "11") ans = 0;
                else {
                    int T_space = 0;
                    if(T_former_110 != "") T_space++;
                    if(T_latter_110 != "") T_space++;
                    T_space += (end_110 - begin_110) / 3;
                    ans = num_110 - T_space + 1;
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}
