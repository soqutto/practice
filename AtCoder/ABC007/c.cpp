#include <bits/stdc++.h>

using namespace std;

int main(){
    int R, C;
    cin >> R >> C;

    pair<int, int> start;
    pair<int, int> goal;
    cin >> start.first >> start.second;
    cin >> goal.first >> goal.second;
    start.first--;
    start.second--;
    goal.first--;
    goal.second--;

    vector<vector<char>> board(R, vector<char>(C));
    vector<vector<bool>> visited(R, vector<bool>(C, false));
    vector<vector<int>> minimumHand(R, vector<int>(C, 0));

    for(int i=0; i<R; ++i){
        string s;
        cin >> s;
        for(int j=0; j<(int)s.length(); ++j){
            board[i][j] = s[j];
        }
    }

    queue<pair<int, int>> queBFS;
    queBFS.push(start);
    minimumHand[start.first][start.second] = 0;

    while(!queBFS.empty()){
        auto p = queBFS.front();
        queBFS.pop();
        int x, y;
        tie(y, x) = p;

        vector<pair<int, int>> next = {{y-1, x}, {y+1, x}, {y, x-1}, {y, x+1}};
        while(!next.empty()){
            auto ap = next.back();
            next.pop_back();
            int ax, ay;
            tie(ay, ax) = ap;
            if(!visited[ay][ax] && board[ay][ax] == '.'){
                queBFS.push({ay, ax});
                minimumHand[ay][ax] = minimumHand[y][x] + 1;
                visited[ay][ax] = true;
            }
        }
    }

    cout << minimumHand[goal.first][goal.second] << endl;
    return 0;
}
