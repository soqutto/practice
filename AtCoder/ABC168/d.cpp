#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    
    vector<vector<int>> route(N);
    vector<bool> visited(N, false);
    vector<int> pointers(N, -1);
    for(int i=0; i<M; ++i){
        int a, b;
        cin >> a >> b;
        a--; b--;
        route[a].push_back(b);
        route[b].push_back(a);
    }

    visited[0] = true;
    queue<int> que_route;
    que_route.push(0);

    while(!que_route.empty()){
        int from = que_route.front();
        que_route.pop();
        for(auto a: route[from]){
            if(!visited[a]){
                que_route.push(a);
                visited[a] = true;
                pointers[a] = from;
            }
        }
    }

    bool visited_all = true;
    for(auto a: visited) if(!a) visited_all = false;

    if(visited_all){
        cout << "Yes" << endl;
        for(int i=1; i<N; ++i) cout << pointers[i]+1 << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
