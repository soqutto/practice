#include <bits/stdc++.h>

using namespace std;

int F(int64_t A, int64_t B){
    return max(to_string(A).size(), to_string(B).size());
}

int main(){
    int64_t N;
    cin >> N;

    unordered_set<int64_t> divisors_half;
    for(int i=1; i<=(int)sqrt(N); ++i){
        if(N%i == 0) divisors_half.insert(i);
    }

    int Fmin = 12;
    for(auto it = divisors_half.begin(); it != divisors_half.end(); ++it){
        Fmin = min(Fmin, F(*it, N / *it));
    }

    cout << Fmin << endl;

    return 0;
}
