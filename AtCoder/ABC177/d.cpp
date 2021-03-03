#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

int main(){
    int N, M;
    cin >> N >> M;

    vector<vector<int>> friends(N);
    for(int i=0; i<M; ++i){
        int a, b;
        cin >> a >> b;
        friends[a-1].push_back(b-1);
        friends[b-1].push_back(a-1);
    }

    bitset<2*(int)1e5+1> checked(0);

    vector<int> link_components;
    int ep = 0;
    while(ep != N){
        if(checked[ep]){
            ep++;
            continue;
        }

        queue<int> friends_queue;
        friends_queue.push(ep);
        checked.set(ep);
        int nodes = 1;
        while(!friends_queue.empty()){
            int i = friends_queue.front();
            friends_queue.pop();
            for(int j=0; j<friends[i].size(); ++j){
                if(!checked[friends[i][j]]){
                    friends_queue.push(friends[i][j]);
                    checked.set(friends[i][j]);
                    nodes++;
                }
            }
        }
        link_components.push_back(nodes);
    }

    int max_link_group = *max_element(all(link_components));

    cout << max_link_group << endl;

    return 0;
}
