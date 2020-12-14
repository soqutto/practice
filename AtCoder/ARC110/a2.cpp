#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    long long int a = 2;
    cin >> N;

    for(int i = 3; i <= N; ++i){
        a = lcm(a, i);
    }

    cout << a+1 << endl;
    return 0;
}
