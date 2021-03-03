#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;

    set<pair<int, int>> V;
    for(int i=0; i<M; ++i){
        int a, b;
        cin >> a >> b;
        V.insert({a, b});
        V.insert({b, a});
    }

    vector<int> course(N);
    for(int i=0; i<N; ++i) course[i] = i+1;

    int path_num = 0;

    do{
        bool path_present = true;
        for(int i=0; i<N-1; ++i){
            if(V.count({course[i], course[i+1]}) == 0) path_present = false;
        }
        if(path_present) path_num++;
    } while (next_permutation(course.begin()+1, course.end()));

    cout << path_num << endl;
    return 0;
}
