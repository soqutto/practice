#include <bits/stdc++.h>

using namespace std;
using P = pair<int64_t, int>;
#define INF (1e18)

struct Edge{
    int target;
    int64_t distance;
    int64_t leadtime;

    Edge(int n, int64_t d, int64_t l){
        target = n;
        distance = d;
        leadtime = l;
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
            int64_t start_time;
            if(dst[v] % e.leadtime == 0){
                start_time = dst[v];
            } else {
                start_time = dst[v] + e.leadtime - dst[v] % e.leadtime;
            }
            if(dst[e.target] > start_time + e.distance){
                dst[e.target] = start_time + e.distance;
                prev[e.target] = v;
                que.push(P(dst[e.target], e.target));
            }
        }
    }

    return dst;
}


int main(){
    int N, M; cin >> N >> M;
    int X, Y; cin >> X >> Y;
    X--; Y--;

    vector<vector<Edge>> Graph(N);
    for(int i=0; i<M; ++i){
        int a, b, t, k;
        cin >> a >> b >> t >> k;
        a--; b--;
        Graph[a].push_back(Edge(b, t, k));
        Graph[b].push_back(Edge(a, t, k));
    }

    auto dst = dijkstra(X, Graph);

    if(dst[Y] == INF){
        cout << -1 << endl;
    } else {
        cout << dst[Y] << endl;
    }

    return 0;

}
