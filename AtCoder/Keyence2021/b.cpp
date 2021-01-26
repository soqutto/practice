#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, K;
    cin >> N >> K;

    map<int, int> a;
    int tmp;
    for(int i=0; i<N; ++i){
        cin >> tmp;
        a[tmp]++;
    }

    int64_t ans = 0;

    int i = 0;
    int boxes = K;
    while(a[0] != 0 && boxes != 0){
        for(i=0; i <= a.rbegin()->first; ++i){
            if(a[i] == 0) break;
            else a[i]--;
        }
        ans += i;
        boxes--;
    }

    cout << ans << endl;
    
    return 0;
}
