#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i=0; i<N; ++i) cin >> A[i];

    int max_mikan = 0;
    int min_elem;
    
    for(int i=0; i<N; ++i){
        min_elem = A[i];
        for(int j=i; j<N; ++j){
            min_elem = min(min_elem, A[j]);
            max_mikan = max(max_mikan, min_elem * (j-i+1));
        }
    }

    cout << max_mikan << endl;

    return 0;
}
