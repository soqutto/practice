#include <bits/stdc++.h>

using namespace std;
using P = pair<int64_t, int>;
#define INF (1e15)

struct Edge{
    int target;
    int64_t distance;

    Edge(int n, int64_t d){
        target = n;
        distance = d;
    }
};

vector<int64_t> dijkstra(int start, vector<vector<Edge>> &graph){
    int N = (int)graph.size();
    vector<int64_t> dst(N, INF);
    dst[start] = 0;
    vector<int64_t> prev(N, -1);
    priority_queue<P, vector<P>, greater<P>> que;

    que.push(P(0, start));

    while(!que.empty()){
        P p = que.top();
        que.pop();
        int v = p.second;
        if(dst[v] < p.first) continue;

        for(int i=0; i<graph[v].size(); ++i){
            Edge e = graph[v][i];
            if(dst[e.target] > dst[v] + e.distance){
                dst[e.target] = dst[v] + e.distance;
                prev[e.target] = v;
                que.push(P(dst[e.target], e.target));
            }
        }
    }

    return dst;
}


int main(){
    int N, M;
    cin >> N >> M;

    vector<int> A(M);
    vector<int> B(M);
    vector<int64_t> C(M);
    vector<vector<Edge>> Graph(N);
    vector<vector<Edge>> Graph_Inv(N);
    for(int i=0; i<M; ++i){
        cin >> A[i] >> B[i] >> C[i];
        A[i]--; B[i]--;
        Graph[A[i]].push_back(Edge(B[i], C[i]));
        Graph_Inv[B[i]].push_back(Edge(A[i], C[i]));
    }

    vector<vector<int64_t>> distances(N);
    vector<vector<int64_t>> distances_Inv(N);
    for(int i=0; i<N; ++i){
        distances[i] = dijkstra(i, Graph);
        distances_Inv[i] = dijkstra(i, Graph_Inv);
    }

    for(int i=0; i<N; ++i){
        int64_t min_dist = INF;
        for(int j=0; j<Graph[i].size(); ++j){
            auto v = Graph[i][j];
            if(v.target == i) min_dist = min(min_dist, v.distance);
        }
        for(int j=0; j<N; ++j){
            if(i == j) continue;
            min_dist = min(min_dist, distances[i][j] + distances_Inv[i][j]);
        }
        cout << (min_dist == INF ? -1 : min_dist) << endl;
    }

    return 0;

}
