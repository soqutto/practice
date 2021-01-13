#include <bits/stdc++.h>

using namespace std;

class InterestingParty{
    public:
        int bestInvitation(vector<string> first,
                           vector<string> second){
            unordered_map<string, int> interests;

            for(int i = 0; i < first.size(); ++i){
                interests[first[i]] = 0;
                interests[second[i]] = 0;
            }

            for(int i = 0; i < first.size(); ++i){
                interests[first[i]]++;
                interests[second[i]]++;
            }

            int ans = 0;
            unordered_map<string, int>::iterator it;
            for(it = interests.begin(); it != interests.end(); ++it){
                ans = max(ans, it->second);
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
