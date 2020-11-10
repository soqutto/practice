#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> A(N);
    for(auto& a: A) cin >> a;

    vector<int> gcd_level(1001);

    for(int j = 2; j < 1001; ++j){
        for(int i = 0; i < N; ++i){
            if(A[i] % j == 0) gcd_level[j]++;
        }
    }

    int max = max_element(gcd_level.begin(), gcd_level.end()) - gcd_level.begin();

    cout << max << endl;

    return 0;
}
