#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
  int N; cin >> N;
  vector<vector<int>> graph(N, vector<int>());
  vector<bool> visited(N, false);
  vector<int> dist(N, 0);
  int max_dist = 0;
  int max_dist_point = 0;

  for(int i=0; i<N-1; ++i){
    int a, b;
    cin >> a >> b;
    a--; b--;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }

  queue<int> bfs_queue;
  bfs_queue.push(0);

  while(!bfs_queue.empty()){
    int p = bfs_queue.front();
    bfs_queue.pop();
    visited[p] = true;
    for(auto np : graph[p]){
      if(!visited[np]){
        bfs_queue.push(np);
        dist[np] = dist[p] + 1;
        if(chmax(max_dist, dist[np])) max_dist_point = np;
      }
    }
  }

  vector<int> dist_second(N, 0);
  int max_dist_second = 0;
  vector<bool> visited_second(N, false);
  queue<int> bfs_queue_second;
  bfs_queue_second.push(max_dist_point);

  while(!bfs_queue_second.empty()){
    int p = bfs_queue_second.front();
    bfs_queue_second.pop();
    visited_second[p] = true;
    for(auto np : graph[p]){
      if(!visited_second[np]){
        bfs_queue_second.push(np);
        dist_second[np] = dist_second[p] + 1;
        chmax(max_dist_second, dist_second[np]);
      }
    }
  }

  cout << max_dist_second + 1 << endl;

  return 0;
}
