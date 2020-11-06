#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N;
    vector<int> X;
    vector<int> Y;
    int x, y;
    bool line = false;

    cin >> N;

    for(int i = 0; i < N; ++i){
        cin >> x >> y;
        X.push_back(x);
        Y.push_back(y);
    }

    for(int i = 0; i < N-1; ++i){
        for(int j = i+1; j < N; ++j){
            int x1 = X.at(i);
            int x2 = X.at(j);
            int y1 = Y.at(i);
            int y2 = Y.at(j);
            if (x1 == x2){
                for(int k = 0; k < N; ++k){
                    if (k == i || k == j) continue;
                    if (X.at(k) == x1){
                        line = true;
                        break;
                    }
                }
            } else {
                double a = (double)(y1 - y2) / (x1 - x2);
                double b = y1 - a * x1;
                for(int k = 0; k < N; ++k){
                    if (k == i || k == j) continue;
                    if (Y.at(k) - a * X.at(k) == b){
                        line = true;
                        break;
                    }
                }
            }
        }
    }

    if (line){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;

}
