#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

struct UnionFind{
    vector<int> parent;
    vector<int> nodes;
    vector<int> members;

    UnionFind(int N) : parent(N), nodes(N), members(N) {
        for(int i=0; i<N; ++i) {parent[i] = i; members[i] = 1;}
    }

    int root(int x){
        if(parent[x] == x) return x;
        return parent[x] = root(parent[x]);
    }

    void unite(int x, int y){
        int rx = root(x);
        int ry = root(y);
        if(rx == ry) {nodes[rx]++; return;}
        int rmx = max(rx, ry);
        int rmi = min(rx, ry);
        parent[rmx] = rmi;
        nodes[rmi] = nodes[rmi] + nodes[rmx] + 1;
        nodes[rmx] = 0;
        members[rmi] += members[rmx];
        members[rmx] = 0;
    }

    bool same(int x, int y){
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};

int main(){
    int N; cin >> N;
    int max_color_name = 0;
    vector<int> A(N), B(N);
    for(int i=0; i<N; ++i){
        int a, b; cin >> a >> b;
        a--; b--;
        A[i] = a; B[i] = b;
        chmax(max_color_name, a);
        chmax(max_color_name, b);
    }
    UnionFind uf(max_color_name+1);
    for(int i=0; i<N; ++i){
        uf.unite(A[i], B[i]);
    }
    int ans = 0;
    for(int i=0; i<max_color_name+1; ++i){
        if(uf.nodes[i] >= uf.members[i]) ans += uf.members[i];
        else ans += uf.nodes[i];
    }

    cout << ans << endl;
    return 0;
}
