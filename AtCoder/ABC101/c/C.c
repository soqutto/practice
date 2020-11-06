#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int N;
    int K;
    int An[100000];
    char *Astr = NULL;
    char *tp;

    scanf("%d %d", &N, &K);
    fflush(stdin);
    getline(&Astr, &(size_t){4096}, stdin);
    tp = strtok(Astr, " ");
    int i = 0;
    An[i] = atoi(tp);
    while (tp != NULL){
        i++;
        tp = strtok(NULL, " ");
        if (tp != NULL) An[i] = atoi(tp);
    }
    
    for(int j = 0; j < i; j++){
        printf("%d", An[j]);
    }

    free(Astr);
    return 0;
}
