#include <iostream>

using namespace std;

int main(){
    int N;
    long long int sum = 0LL;

    cin >> N;

    // N iteration
    for(int i = 0; i < N; ++i){
        long long int a, b;
        cin >> a >> b;
        sum += (a + b) * (b - a + 1) / 2;
    }

    cout << sum << endl;
    return 0;

}
