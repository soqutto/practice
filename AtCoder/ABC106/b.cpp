#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;

    int ans = 0;
    for(int n=1; n<=N; n += 2){
        unordered_set<int> divisors;
        for(int i=1; i<=(int)sqrt(n); ++i){
            if(n % i == 0){
                divisors.insert(i);
                divisors.insert(n/i);
            }
        }
        if(divisors.size() == 8) ans++;
    }

    cout << ans << endl;

    return 0;
}
