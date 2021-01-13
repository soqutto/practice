#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;

    int L = 2 << (N-1);

    vector<int> rate(L);
    for(int i=0; i<L; ++i) cin >> rate[i];

    set<int> part;
    for(int i=0; i<L; ++i) part.insert(i);

    vector<int> losers;

    while(part.size() > 1){
        for(auto it = part.begin(); it != part.end();){
            int next = *part.upper_bound(*it);
            int rate_a = rate[*it];
            int rate_b = rate[next];
            if(rate_a > rate_b) losers.push_back(next);
            else losers.push_back(*it);
            it = part.upper_bound(next);

        }
        for(auto it = losers.begin(); it != losers.end(); ++it){
            part.erase(*it);
        }
        if(losers.size() == 1) break;
        else losers.clear();
    }

    cout << losers[0]+1 << endl;

    return 0;
}
