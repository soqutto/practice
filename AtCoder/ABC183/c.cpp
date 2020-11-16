#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, K;
    cin >> N >> K;

    vector<int> city(N-1);
    vector<vector<int>> T(N, vector<int>(N));

    long long int move_time;
    int paths = 0;

    for(int i = 1; i < N; ++i){
        city[i-1] = i;
    }



    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            cin >> T[i][j];
        }
    }

    do{
        move_time = 0;
        move_time += T[0][city[0]];
        for(int i = 0; i < N - 2; ++i){
            move_time += T[city[i]][city[i+1]];
        }
        move_time += T[city[N-2]][0];

        if (move_time == K) paths++;

    } while (next_permutation(city.begin(), city.end()));

    cout << paths << endl;
        
    return 0;
}
