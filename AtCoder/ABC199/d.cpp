#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int64_t dfs(int point, vector<vector<int> &graph, vector<bool> &visited, vector<int> col){
    int64_t ans_local = 0;
    visited[point] = true;
    for(int i=1; i<=3; ++i){
        col[point] = i;
        for(auto next_p: graph[point]){
            if(col[point] == col[next_p]){
                return 0;
            }
            if(col[next_p] == 0) ans_local += dfs(next_p, graph, visited, col);
        }
    }

    return ans_local;
}

int main(){
    int N, M;
    cin >> N >> M;

    vector<pair<int, int>> edge(M);
    vector<vector<int>> graph(N, vector<int>(0));
    vector<bool> visited(N, false);
    vector<int64_t> local_ans;

    int64_t ans = 1;

    for(auto& [a, b] : edge){
        cin >> a >> b;
        a--; b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    return 0;
}
