#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

#define INF (1e7)

int main(){
    int N; cin >> N;
    int64_t K; cin >> K;
    vector<int> A(N);
    for(auto& a: A) {cin >> a; a--;}

    vector<int> visit_step(N+1, -1);
    vector<int> visit_order = {0};
    visit_step[0] = 0;
    int i = 0, j = 0;
    int l, r;
    while(true){
        if(i == K){
            cout << visit_order[i]+1 << endl;
            return 0;
        }
        int jump_to = A[j];
        if(visit_step[jump_to] != -1){
            l = visit_step[jump_to];
            r = i+1;
            int64_t ans = visit_order[(K-l)%(r-l)+l]+1;
            cout << ans << endl;
            return 0;
        }
        i++;
        visit_step[jump_to] = i;
        visit_order.push_back(jump_to);
        j = jump_to;
    }
    return 0;
}
