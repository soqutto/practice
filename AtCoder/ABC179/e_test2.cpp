#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()

using namespace std;

int main(){
    int64_t N, X, M;
    cin >> N >> X >> M;

    vector<int> hist(N);
    vector<int> hist_sum(N+1);
    //unordered_set<int> hist_hash;
    bitset<(int)1e5> hist_hash_b;
    hist_sum[0] = 0;

    int64_t a = X;
    hist[0] = a;
    hist_sum[1] = a;
    //hist_hash.insert(a);
    hist_hash_b.set(a);

    int loop_point_a;
    int loop_point_b;
    bool loop = false;

    for(int i=2; i<=N; ++i){
        a = a*a%M;
        hist[i-1] = a;
        hist_sum[i] = hist_sum[i-1] + a;
        //if(hist_hash.count(a) != 0){
        if(hist_hash_b[a]){
            loop_point_b = i-1;
            loop = true;
            break;
        } else {
            hist_hash_b.set(a);
            //hist_hash.insert(a);
        }
    }

    if(!loop){
        cout << hist_sum[N] << endl;
        return 0;
    }

    loop_point_a = distance(hist.begin() ,find(all(hist), hist[loop_point_b]));
    int64_t loop_area = loop_point_b - loop_point_a;
    //int64_t ans = N / loop_area * (hist_sum[loop_point_b+1] - hist_sum[loop_point_a])
                + hist_sum[N%loop_area + loop_point_a];

    cout << loop_point_a << ", " << loop_point_b << endl;
    //cout << ans << endl;

    return 0;
}
