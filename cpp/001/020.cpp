#include <iostream>

using namespace std;

int main(){
    int a, b, sign, result, i;

    for(i = 0; i < 5; i++){
        cout << "param1: ";
        cin >> a;
        cout << "param2: ";
        cin >> b;
        cout << "演算種類 1:+, 2:-, 3:*, 4:/ :";
        cin >> sign;

        if(sign == 1)
            result = a + b;
        else if (sign == 2)
            result = a - b;
        else if (sign == 3)
            result = a * b;
        else if (sign == 4)
            result = a / b;
        else{
            cout << "真面目にせんかい！" << endl;
            continue;
        }

        cout << "答えは" << result << "です." << endl;
    }

    return 0;
}
