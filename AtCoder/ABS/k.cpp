#include <bits/stdc++.h>
#define REP(i, n)   for(int i=0; i<(int)(n); ++i)
#define ALL(x)      (x).begin(), (x).end()
template<class T> inline bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}

using namespace std;

int main(){
    int N; cin >> N;
    vector<int> time(N);
    vector<pair<int, int>> pos(N);

    bool satisfiable = true;
    pair<int, int> last_pos = {0,0};
    int last_time = 0;

    for(int i=0; i<N; ++i){
        cin >> time[i] >> pos[i].first >> pos[i].second;
    }

    for(int i=0; i<N; ++i){
        int dist = abs(last_pos.first - pos[i].first) + abs(last_pos.second - pos[i].second);
        int travel_time = time[i] - last_time;
        if(travel_time < dist){
            satisfiable = false;
            break;
        } else if (travel_time == dist){
            last_pos = pos[i];
            last_time = time[i];
        } else {
            if(travel_time % 2 == dist % 2){
                last_pos = pos[i];
                last_time = time[i];
            } else {
                satisfiable = false;
                break;
            }
        }
    }
    cout << (satisfiable ? "Yes" : "No") << endl;
    return 0;
}
