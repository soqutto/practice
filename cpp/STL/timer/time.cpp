#include <bits/stdc++.h>

using namespace std;

int main(){
    double start = clock();
    long long int i = 0;
    int j;
    while(i < 1e9){
        ++i;
        ++j;
    }
    cout << "i: " << i << endl;
    cout << "j: " << j << endl;
    double end = clock();

    double elapsed = (end - start) / CLOCKS_PER_SEC;
    cout << elapsed << " [s]" << endl;
    return 0;
}
