#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;

    vector<string> S(N);
    unordered_map<string, int64_t> Smap;
    for(auto& s: S){
        cin >> s;
        sort(s.begin(), s.end());
        Smap[s]++;
    }

    int64_t ans = 0;
    for(auto it = Smap.begin(); it != Smap.end(); ++it){
        int64_t n = it->second;
        ans += n*(n-1)/2;
    }

    cout << ans << endl;
    
    return 0;
}
