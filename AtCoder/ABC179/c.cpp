#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()

using namespace std;

int main(){
    int N;
    cin >> N;

    int64_t ans = 0;
    for(int c=1; c<=N-1; ++c){
        int ab = N-c;
        for(int i=1; i*i<=ab; ++i){
            if(ab % i == 0){
                if(i*i == ab) ans += 1;
                else ans += 2;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
