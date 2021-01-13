#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, C;
    cin >> N >> C;

    vector<int> a(N), b(N), c(N);
    for(int i=0; i<N; ++i) cin >> a[i] >> b[i] >> c[i];

    map<int, int64_t> fare_change;
    for(int i=0; i<N; ++i){
        if(fare_change.count(a[i]-1)) fare_change[a[i]-1] += c[i];
        else fare_change[a[i]-1] = c[i];
        if(fare_change.count(b[i])) fare_change[b[i]] -= c[i];
        else fare_change[b[i]] = -c[i];
    }

    /*
    for(auto it = fare_change.begin(); it != fare_change.end(); ++it){
        cout << it->first << " " << it->second << endl;
    }
    */

    int64_t money = 0;
    int64_t paycost = 0;
    int64_t primecost = C;

    int64_t next_day, days;

    for(auto it = fare_change.begin(); it != fare_change.end(); ++it){
        auto next_it = fare_change.upper_bound(it->first);
        if(next_it == fare_change.end()){
            break;
        } else {
            next_day = next_it->first;
            days = next_day - it->first;
        }
        paycost += it->second;

        /*
        cout << "day " << it->first << " - " << next_day << ": " <<
            "Paycost: " << paycost << ", Primecost: " << primecost << endl;
        */

        if(paycost > primecost){
            money += days * primecost;
        } else {
            money += days * paycost;
        }
    }

    cout << money << endl;

    return 0;
}
