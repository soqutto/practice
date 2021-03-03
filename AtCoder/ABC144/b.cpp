#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    bool is_presentable_as_kuku = false;
    for(int i=1; i<=9; ++i){
        if(N % i == 0 && 1 <= N/i && N/i <= 9) is_presentable_as_kuku = true;
    }
    cout << (is_presentable_as_kuku ? "Yes" : "No") << endl;
    return 0;
}
