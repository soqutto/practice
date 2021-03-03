#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, X;
    cin >> N >> X;

    vector<int> A(N);
    for(auto& a: A) cin >> a;

    vector<int> Aprime;
    for(auto a: A){
        if(a == X) continue;
        else Aprime.push_back(a);
    }

    for(int i=0; i<(int)Aprime.size(); ++i){
        cout << Aprime[i];
        if(i != Aprime.size()-1) cout << " ";
    }

    cout << endl;
    return 0;
}
