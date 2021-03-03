#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;

    vector<int> connected_switch_num(M);
    vector<vector<int>> connected_switches(M);
    for(int i=0; i<M; ++i){
        cin >> connected_switch_num[i];
        connected_switches[i] = vector<int>(connected_switch_num[i]);
        for(auto& s: connected_switches[i]){
            cin >> s;
            s--;
        }
    }

    vector<int> P(M);
    for(auto& p: P) cin >> p;

    int patterns_light_all_on = 0;
    for(int i=0; i<(1<<N); ++i){
        int on_light_num = 0;
        vector<bool> on_switch(N);
        for(int j=0; j<N; ++j) if((i >> j) & 1) on_switch[j] = true;
        for(int j=0; j<M; ++j){
            int on_switch_num = 0;
            for(int k=0; k<connected_switches[j].size(); ++k){
                if(on_switch[connected_switches[j][k]]) on_switch_num++;
            }
            if(on_switch_num % 2 == P[j]) on_light_num++;
        }
        if(on_light_num == M) patterns_light_all_on++;
    }

    cout << patterns_light_all_on << endl;

    return 0;
}
