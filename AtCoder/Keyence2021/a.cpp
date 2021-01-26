#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int64_t> a(N), b(N);
    for(int i=0; i<N; ++i) cin >> a[i];
    for(int i=0; i<N; ++i) cin >> b[i];

    cout << a[0] * b[0] << endl;

    int a_max_idx = 0;
    int64_t prod_max = a[0] * b[0];

    int i = 1;

    while(i < N){
        if(a[i] > a[a_max_idx]) a_max_idx = i;
        prod_max = max(prod_max, a[a_max_idx] * b[i]);
        cout << prod_max << endl;
        i++;
    }
    return 0;
}
