#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> A(N);
    for(auto& a: A) cin >> a;

    vector<int> inversions(N);

    unordered_set<int> left, right;
    int key;
    for(int i=0; i<N; ++i){
        key = A[i];
        for(int i=0; i<


    return 0;
}
