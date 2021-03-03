#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;

    vector<int64_t> A(N), B(N);
    for(auto& a: A) cin >> a;
    for(auto& b: B) cin >> b;

    vector<vector<int>> graph(N);
    for(int i=0; i<M; ++i){
        int c, d;
        cin >> c >> d;
        c--; d--;
        graph[c].push_back(d);
        graph[d].push_back(c);
    }
    vector<bool> visited(N, false);
    vector<vector<int>> connected_group;
    
    for(int i=0; i<N; ++i){
        if(visited[i]) continue;
        queue<int> qGraph;
        vector<int> cGraph;
        visited[i] = true;
        qGraph.push(i);
        cGraph.push_back(i);
        while(!qGraph.empty()){
            int n = qGraph.front();
            qGraph.pop();
            for(auto e: graph[n]){
                if(!visited[e]){
                    qGraph.push(e);
                    cGraph.push_back(e);
                    visited[e] = true;
                }
            }
        }
        connected_group.push_back(cGraph);
    }

    bool satisfiable = true;

    for(auto cg: connected_group){
        int64_t pre_val_sum = 0;
        int64_t desired_val_sum = 0;
        for(auto v: cg){
            pre_val_sum += A[v];
            desired_val_sum += B[v];
        }
        if(pre_val_sum != desired_val_sum) satisfiable = false;
    }

    cout << (satisfiable? "Yes" : "No") << endl;
    return 0;
}
