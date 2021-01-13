#include <bits/stdc++.h>

using namespace std;

class InterestingParty{
    public:
        int bestInvitation(vector<string> first,
                           vector<string> second){
            int ans = 0;
            for(int i = 0; i < first.size(); ++i){
                int f = 0, s = 0;
                for(int j = 0; j < first.size(); ++j){
                    if(first[i] == first[j]) ++f;
                    if(first[i] == second[j]) ++f;
                    if(second[i] == first[j]) ++s;
                    if(second[i] == second[j]) ++s;
                }
                ans = max(ans, f);
                ans = max(ans, s);
            }

            return ans;
        }
};

int main(){
    InterestingParty ip;
    int N;
    cin >> N;

    vector<string> first(N);
    vector<string> second(N);

    for(int i = 0; i < N; ++i) cin >> first[i];
    for(int i = 0; i < N; ++i) cin >> second[i];

    cout << ip.bestInvitation(first, second) << endl;
    return 0;
}
