#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;

    vector<int> Hi(N), Wi(N);

    int64_t sumdiff_min = 2 << 20;

    for(int i=0; i < N; ++i){
        cin >> Hi[i];
    }
    for(int i=0; i < M; ++i){
        cin >> Wi[i];
    }

    sort(Hi.begin(), Hi.end());
    sort(Wi.begin(), Wi.end());

    vector<int> diff_to_next(N-1);
    vector<int> diff_to_secondNext(N-2);
    for(int i=0; i < N-1; ++i) diff_to_next[i] = Hi[i+1] - Hi[i];
    for(int i=0; i < N-2; ++i) diff_to_secondNext[i] = Hi[i+2] - Hi[i];

    // odd member match to teacher:
    for(int i=0; i < N; i += 2){
        int64_t sumdiff = 0;
        for(int j=0; j < i; j += 2) sumdiff += diff_to_next[j];
        for(int j=i+1; j < N-1; j += 2) sumdiff += diff_to_next[j];
        for(int j=0; j < M; ++j){
            sumdiff_min = min(sumdiff + abs(Hi[i] - Wi[j]), sumdiff_min);
        }
    }

    // even member match to teacher:
    for(int i=1; i < N-1; i += 2){
        int64_t sumdiff = 0;
        for(int j=0; j < i-1; j += 2) sumdiff += diff_to_next[j];
        sumdiff += diff_to_secondNext[i-1];
        for(int j=i+2; j < N-1; j += 2) sumdiff += diff_to_next[j];
        for(int j=0; j < M; ++j){
            sumdiff_min = min(sumdiff + abs(Hi[i] - Wi[j]), sumdiff_min);
        }
    }

    cout << sumdiff_min << endl;

    return 0;
}
