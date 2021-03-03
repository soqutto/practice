#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()

using namespace std;

int main(){
    int64_t N, X, M;
    cin >> N >> X >> M;

    int64_t a = X;

    for(int i=2; i<=N; ++i){
        a = a*a%M;
        cout << i << " : " << a << endl;
    }

    return 0;
}
