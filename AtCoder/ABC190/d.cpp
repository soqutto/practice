#include <bits/stdc++.h>

using namespace std;

int main(){
    int64_t N;
    cin >> N;

    unordered_set<int64_t> divisors;
    N *= 2;
    for(int64_t i=1; i*i <= N; ++i){
        if(N % i == 0){
            divisors.insert(i);
            divisors.insert(N/i);
        }
    }

    int64_t patterns = 0;

    for(auto it = divisors.begin(); it != divisors.end(); ++it){
        int64_t n, x;
        n = *it;
        x = N / n;
        if((x + 1 - n) % 2 == 0) patterns++;
    }

    cout << patterns << endl;

    return 0;
}
