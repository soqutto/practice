#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int walk_time;
    if(a - b >= 1){
        walk_time = min(2*x, y) * (a-b-1) + x;
    } else if (a == b){
        walk_time = x;
    } else {
        walk_time = min(2*x, y) * (b-a) + x;
    }

    cout << walk_time << endl;
    return 0;
}
