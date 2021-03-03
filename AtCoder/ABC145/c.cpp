#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;

    vector<pair<int, int>> POS(N);
    for(auto& [x, y] : POS) cin >> x >> y;

    vector<int> course(N);
    int courses = 1;
    for(int i=0; i<N; ++i){
        course[i] = i;
        courses *= i+1;
    }

    double distance_sum = 0;

    vector<vector<double>> distance(N, vector<double>(N));
    for(int i=0; i<N-1; ++i){
        for(int j=i+1; j<N; ++j){
            distance[i][j] = sqrt(pow(POS[i].first - POS[j].first, 2) + pow(POS[i].second - POS[j].second, 2));
            distance[j][i] = distance[i][j];
        }
    }

    do{
        for(int i=0; i<N-1; ++i){
            distance_sum += distance[course[i]][course[i+1]];
        }
    } while (next_permutation(course.begin(), course.end()));

    double average_distance = distance_sum / courses;

    cout << fixed << setprecision(15) << average_distance << endl;

    return 0;
}
