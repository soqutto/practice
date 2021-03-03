#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    bool is_presentable_as_kuku = false;
    for(int i=1; i<=9; ++i){
        for(int j=1; j<=9; ++j){
            if(i*j == N) is_presentable_as_kuku = true;
        }
    }
    cout << (is_presentable_as_kuku ? "Yes" : "No") << endl;
    return 0;
}
