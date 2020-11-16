#include <bits/stdc++.h>

using namespace std;

template<typename T>
void printVector(vector<T> v){
    for(auto& a : v){
        cout << a << " ";
    }
    cout << endl;
}

int main(){
    int N = 3;
    vector<int> v(N);
    for(int i = 0; i < N; ++i) v[i] = i;

    int cnt = 0;

    do{
        printVector(v);
        ++cnt;
    } while (next_permutation(v.begin(), v.end()));

    cout << "[Permutation] " << N << "! = " << cnt << endl;

    return 0;
}

