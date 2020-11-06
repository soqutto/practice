#include <stdio.h>
#include <stdlib.h>

int main(void){
    int N;
    char S[11];
    char Sbuf[11][2];
    int Ss[10] = {0};
    int Sn = 0;
    scanf("%d", &N);
    sprintf(S, "%d", N);

    for(int i=0; S[i] != '\0'; i++){
        Sbuf[i][0] = S[i];
        Sbuf[i][1] = '\0';
        Ss[i] = atoi(Sbuf[i]);
        Sn += Ss[i];
    }
    
    if(N % Sn == 0)
        printf("Yes\n");
    else
        printf("No\n");


    return 0;
}
