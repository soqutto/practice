#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    string C;
    cin >> N >> C;

    vector<int> R_sum(N+1);
    vector<int> W_sum(N+1);

    for(int i=1; i<=C.size(); ++i){
        if(C[i-1] == 'R'){
            R_sum[i] = R_sum[i-1] + 1;
            W_sum[i] = W_sum[i-1];
        } else {
            R_sum[i] = R_sum[i-1];
            W_sum[i] = W_sum[i-1] + 1;
        }
    }

    int min_hands = N+1;

    // i番目より左を赤で埋めるときの処理回数を各々求める
    for(int i=N; i>=0; --i){
        int hands = 0;
        int right_reds = R_sum[N] - R_sum[i];
        int left_whites = W_sum[i];

        // 交換可能回数
        int exchange_stones = min(right_reds, left_whites);
        right_reds -= exchange_stones;
        left_whites -= exchange_stones;
        hands += exchange_stones;

        // 残った左の白石はすべて赤、右の赤石はすべて白に変える
        hands += (right_reds + left_whites);

        // 最小操作回数更新
        min_hands = min(min_hands, hands);
    }

    cout << min_hands << endl;

    return 0;
}
