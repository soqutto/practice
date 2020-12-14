#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> divisors = {1,1,2,3,2,5,1,7,2,3,1,11,1,13,1,1,2,17,1,19,1,1,1,23,1,5,1,3,1,29,1};

    long long int out = 1;
    for(int i = 2; i <= N; ++i){
        out *= divisors[i];
    }
    out += 1;

    cout << out << endl;

    return 0;
}
