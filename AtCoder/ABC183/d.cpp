#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, W;
    int now_pouring = 0;
    bool pourable = true;

    cin >> N >> W;

    vector<int> S(N);
    vector<int> T(N);
    vector<int> P(N);

    for(int i = 0; i < N; ++i){
        cin >> S[i] >> T[i] >> P[i];
    }

    for(int t = 0; t < *max_element(T.begin(), T.end()); ++t){
        for(int i = 0; i < N; ++i){
            if(S[i] == t){
                now_pouring += P[i];
            } else if (T[i] == t){
                now_pouring -= P[i];
            }
        }
        if(now_pouring > W){
            pourable = false;
            break;
        }
    }

    if(pourable){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
