#include <bits/stdc++.h>

using namespace std;

vector<int> thePouring(vector<int> capacities,
                       vector<int> bottles,
                       vector<int> fromId, vector<int> toId);

int main(){
    vector<int> capacities = {14, 35, 86, 58, 25, 62};
    vector<int> bottles = {6, 34, 27, 38, 9, 60};
    vector<int> fromId = {1, 2, 4, 5, 3, 3, 1, 0};
    vector<int> toId = {0, 1, 2, 4, 2, 5, 3, 1};

    bottles = thePouring(capacities, bottles, fromId, toId);

    cout << "bottles: ";
    for(auto&& x: bottles) cout << x << " ";
    cout << endl;
    return 0;
}

vector<int> thePouring(vector<int> capacities,
                       vector<int> bottles,
                       vector<int> fromId, vector<int> toId){
    for(int i = 0; i < fromId.size(); ++i){
        // 入れようとしている相手の残量
        int remainVacant = capacities[toId[i]] - bottles[toId[i]];
        if(bottles[fromId[i]] > remainVacant){
            // 入り切らない
            bottles[toId[i]] += remainVacant;
            bottles[fromId[i]] -= remainVacant;
        } else {
            // 入り切る
            bottles[toId[i]] += bottles[fromId[i]];
            bottles[fromId[i]] = 0;
        }
    }

    return bottles;
}

