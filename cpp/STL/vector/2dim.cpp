#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<vector<int>> vec(10);
    cout << "vec.size(): " << vec.size() << endl;
    cout << "vec.at(0).size(): " << vec.at(0).size() << endl;
    cout << "vec.at(1).size(): " << vec.at(1).size() << endl;
    vec.at(0) = vector<int>(5);
    vec.at(1) = vector<int>(2);
    cout << "vec.at(0).size(): " << vec.at(0).size() << endl;
    cout << "vec.at(1).size(): " << vec.at(1).size() << endl;

    vector<vector<int>> vec2(10, vector<int>(5, 9999));
    cout << "vec2.size(): " << vec2.size() << endl;
    cout << "vec2.at(0).size(): " << vec2.at(0).size() << endl;
    cout << "vec2.at(1).size(): " << vec2.at(1).size() << endl;
    cout << "vec2[0][0]: " << vec2[0][0] << endl;
    cout << "vec2[0][1]: " << vec2[0][1] << endl;
    cout << "vec2[1][1]: " << vec2[1][1] << endl;
    return 0;
}
