#include <stdio.h>
#include <stdlib.h>

#define NMAX 3 * 100000

int main(void){
    int N;
    char *S = NULL;

    scanf("%d", &N);
    S = (char*)malloc(sizeof(char)*N);
    scanf("%s", S);

    // 1人目からリーダー指名して方向転換試行
    int chg_direct_num;
    int chg_direct_min = NMAX - 1;
    int current_leader = 0;

    for(current_leader = 0; current_leader < N; current_leader++){
        chg_direct_num = 0;
        for(int i = 0; i < N; i++){
            if(i < current_leader){
                if(S[i] == 'W'){
                    chg_direct_num++;
                }
            } else if(i > current_leader){
                if(S[i] == 'E'){
                    chg_direct_num++;
                }
            } else if(i == current_leader){
                continue;
            }

            if(chg_direct_num >= chg_direct_min){
                break;
            }
        }
        if(chg_direct_num < chg_direct_min){
            chg_direct_min = chg_direct_num;
        }
    }

    printf("%d\n", chg_direct_min);

    free(S);
    return 0;
}
