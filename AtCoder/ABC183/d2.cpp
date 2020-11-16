#include <bits/stdc++.h>

using namespace std;

int main(){
    int64_t N, W;
    bool pourable = true;

    cin >> N >> W;

    vector<int> S(N);
    vector<int> T(N);
    vector<int64_t> P(N);

    for(int i = 0; i < N; ++i){
        cin >> S[i] >> T[i] >> P[i];
    }

    //int max_t = *max_element(T.begin(), T.end());
    int max_t = 200005;
    vector<int64_t> Tdiff(max_t-1);

    for(int i = 0; i < N; ++i) Tdiff[S[i]] += P[i];
    for(int i = 0; i < N; ++i) Tdiff[T[i]] -= P[i];

    vector<int64_t> Wusage(max_t-1);


    for(int t = 0; t < Tdiff.size(); ++t){
        Wusage[t] += Tdiff[t];
        if (Wusage[t] > W){
            pourable = false;
        }
        Wusage[t+1] = Wusage[t];
    }

    if(pourable){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
