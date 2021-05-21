#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

vector<int> get_boxes(vector<int> &x, int l, int r){
    vector<int> box;
    for(int i=0; i<x.size(); ++i){
        if(i >= l && i <= r) continue;
        box.push_back(x[i]);
    }

    return box;
}

int main(){
    int N, M, Q;
    cin >> N >> M >> Q;

    vector<int> W(N);
    vector<pair<int,int>> VW(N);
    vector<int> X(M);
    vector<pair<int,int>> Query(Q);
    for(auto& [v, w] : VW) cin >> w >> v;
    for(auto& x: X) cin >> x;
    for(auto& q: Query) cin >> q.first >> q.second;

    sort(ALL(VW), greater<pair<int,int>>());

    for(int q=0; q<Q; ++q){
        auto box = get_boxes(X, Query[q].first-1, Query[q].second-1);
        sort(ALL(box));
        vector<bool> box_flag(box.size(), false);
        int ans = 0;

        for(int i=0; i<N; ++i){
            for(int m=0; m<box.size(); ++m){
                if(VW[i].second <= box[m] && box_flag[m] == false){
                    ans += VW[i].first;
                    box_flag[m] = true;
                    break;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
