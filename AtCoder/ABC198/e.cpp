#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

set<int> lst;

void dfs(vector<vector<int>> &graph, vector<int> &color, vector<bool> &visited, vector<int> &color_count, int p){
    visited[p] = true;
    if(color_count[color[p]] == 0){
        lst.insert(p+1);
    }
    for(auto& e: graph[p]){
        color_count[color[p]]++;
        if(visited[e] == false) dfs(graph, color, visited, color_count, e);
        color_count[color[p]]--;
    }
}

int main(){
    int N; cin >> N;
    vector<int> color(N);
    for(auto& c: color) cin >> c;

    vector<vector<int>> graph(N, vector<int>());
    vector<bool> visited(N, false);
    vector<int> color_count((int)1e5);

    for(int i=0; i<N-1; ++i){
        int a, b;
        cin >> a >> b;
        a--; b--;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    dfs(graph, color, visited, color_count, 0);

    for(auto l : lst) cout << l << endl;
    return 0;
}
