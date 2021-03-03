#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()

using namespace std;

int main(){
    int N;
    cin >> N;

    bool zorome3times = false;
    vector<bool> zorome(N+2);

    for(int i=0; i<N; ++i){
        int d1, d2;
        cin >> d1 >> d2;
        if(d1 == d2){
            zorome[i+2] = true;
            if(zorome[i] && zorome[i+1]) zorome3times = true;
        }
    }

    cout << (zorome3times ? "Yes" : "No") << endl;

    return 0;
}
