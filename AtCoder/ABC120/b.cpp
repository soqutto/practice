#include <bits/stdc++.h>

using namespace std;

int main(){
    int A, B, K;
    cin >> A >> B >> K;
    
    unordered_set<int> divisors_a;
    set<int> common_divisors;
    for(int i=1; i<=A; ++i) if(A%i == 0) divisors_a.insert(i);
    for(int i=1; i<=B; ++i) if(B%i == 0 && divisors_a.count(i)) common_divisors.insert(i);

    int i = 1;
    for(auto it = common_divisors.rbegin();
             it != common_divisors.rend(); ++it){
        if(i == K) cout << *it << endl;
        i++;
    }

    return 0;
}
