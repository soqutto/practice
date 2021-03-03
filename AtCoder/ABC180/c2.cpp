#include <bits/stdc++.h>

using namespace std;

int main(){
    int64_t N;
    cin >> N;

    vector<int64_t> divs_half;
    vector<int64_t> ans;
    for(int64_t i=1; i<=sqrt(N); ++i){
        if(N % i == 0) divs_half.push_back(i);
    }

    ans = divs_half;
    auto it = divs_half.rbegin();
    if(N == 1)
        it = divs_half.rend();
    else if(pow(divs_half.back(), 2) == N)
        it = divs_half.rbegin() + 1;
    else
        it = divs_half.rbegin();

    for(; it != divs_half.rend(); ++it){
        ans.push_back(N / *it);
    }

    for(auto a: ans) cout << a << endl;

    return 0;
}
