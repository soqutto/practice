#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;


int main(){
    int N; cin >> N;
    map<int, vector<int64_t>> color_pos;
    vector<vector<int64_t>> color_pos_vec;
    color_pos_vec.push_back({0});
    color_pos[0] = {0};

    for(int i=0; i<N; ++i){
        int64_t p; int c;
        cin >> p >> c;
        color_pos[c].push_back(p);
    }

    for(auto& cp : color_pos){
        sort(ALL(cp.second));
        color_pos_vec.push_back(cp.second);
    }
    int colors = color_pos.size()-1;

    vector<vector<int64_t>> dp(colors+1, vector<int64_t>(2, 1e15));
    dp[0] = {0, 0};

    for(int i=1; i<=colors; ++i){
        auto bcp = color_pos_vec[i];
        auto cp = color_pos_vec[i+1];

        // 順方向, 前回順方向
        chmin(dp[i][0], dp[i-1][0] + abs(*bcp.rbegin() - *cp.begin()) + (*cp.rbegin() - *cp.begin()));
        // 順方向, 前回逆方向
        chmin(dp[i][0], dp[i-1][1] + abs(*bcp.begin() - *cp.begin()) + (*cp.rbegin() - *cp.begin()));
        // 逆方向, 前回順方向
        chmin(dp[i][1], dp[i-1][0] + abs(*bcp.rbegin() - *cp.rbegin()) + (*cp.rbegin() - *cp.begin()));
        // 逆方向, 前回逆方向
        chmin(dp[i][1], dp[i-1][1] + abs(*bcp.begin() - *cp.rbegin()) + (*cp.rbegin() - *cp.begin()));
    }

    dp[colors][0] += abs(*color_pos_vec[colors+1].rbegin());
    dp[colors][1] += abs(*color_pos_vec[colors+1].begin());
    
    cout << min(dp[colors][0],dp[colors][1]) << endl;

    return 0;
}
