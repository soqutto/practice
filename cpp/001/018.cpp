#include <iostream>

using namespace std;

int main(){
    int a = 0;
    while (a < 10){
        cout << a << endl;
        a += 2;
    }
    a = 0;
    while(a > 1){
        cout << "出るかな？" << endl;
        // 出ない
    }

    do{
        cout << a << endl;
    } while (a > 1);
    return 0;
}
