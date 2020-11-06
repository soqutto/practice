#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;

    vector<int> Hi(N), Wi(N);

    int64_t sumdiff_min = 10 << 24;

    for(int i=0; i < N; ++i){
        cin >> Hi[i];
    }
    for(int i=0; i < M; ++i){
        cin >> Wi[i];
    }

    sort(Hi.begin(), Hi.end());
    sort(Wi.begin(), Wi.end());

    vector<int> sum1((N+1)/2);
    vector<int> sum2((N+1)/2);

    for(int i = 0; i + 1 < N; i += 2) sum1[i / 2 + 1] = sum1[i / 2] + Hi[i + 1] - Hi[i];
    for(int i = N - 2; i > 0; i -= 2) sum2[i / 2] = sum2[i / 2 + 1] + Hi[i + 1] - Hi[i];

    for(int w: Wi){
        int x = lower_bound(Hi.begin(), Hi.end(), w) - Hi.begin();
        if(x & 1) x ^= 1;
        sumdiff_min = min(sumdiff_min, (long long int)sum1[x / 2] + sum2[x / 2] + abs(Hi[x] - w));
    }

    cout << sumdiff_min << endl;

    return 0;
}
