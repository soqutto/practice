#include <iostream>

using namespace std;

int c = 2;

int main(){
    int a;

    cout << "値を入れてください> ";
    cin >> a;

    cout << "その数を3で割ったあまりは "
        << a % 3 << " です" << endl;

    return 0;
}
