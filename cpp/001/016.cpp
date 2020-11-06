#include <iostream>

using namespace std;

int main(){
    int nResults[] = {6,6,8,6,6};

    int i;
    for(i = 0; i < sizeof(nResults) / sizeof(int); i++){
        cout << "i[" << i << "] = " << nResults[i] << endl;
    }
    return 0;
}
