#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    vector<int> A(M);
    vector<int> B(M);
    vector<int64_t> C(M);

    vector<vector<pair<int, int64_t>>> Route(N);
    for(int i=0; i<M; ++i){
        cin >> A[i] >> B[i] >> C[i];
        A[i]--; B[i]--; C[i]--;
        Route[A[i]].push_back({B[i], C[i]});
    }

    for(int i=0; i<N; ++i){
        vector<int64_t> d(N, 1e12);
        vector<int> prev(N, -1);
        d[i] = 0;
        
        using P = pair<int64_t, int>;
        priority_queue<P, vector<P>, greater<P>> q;
        q.push(P(0, i));

        while(!q.empty()){
            P p = q.top();
            q.pop();
            int v = p.second;
            if(d[v] < p.first){
                continue;
            }

            for(int j=0; j<Route[v].size(); ++j){
                bool home_back = false;
                pair<int, int64_t> r = Route[v][i];
                if(d[r.first] > d[v] + r.second){
                    d[r.first] = d[v] + r.second;
                    prev[r.first] = v;
                    q.push(P(d[r.first], r.first));
                }
                else if(r.first ==  i){
                    if(!home_back){ home_back = true; d[i] = 1e12;}
                    if(home_back && d[i] > d[v] + r.second){
                        d[i] = d[v] + r.second;
                        prev[i] = v;
                    }
                }
            }
        }
        if(d[i] == 0){
            cout << -1 << endl;
        } else {
            cout << d[i] << endl;
        }
    }
    return 0;
}
