#include <stdio.h>

int main(void){
    char S[5];
    int N = 0;
    scanf("%s", S);
    for(int i = 0; i < 4; i++){
        switch(S[i]){
            case '+':
                N++; break;
            case '-':
                N--; break;
        }
    }
    printf("%d\n", N);
    return 0;
}
