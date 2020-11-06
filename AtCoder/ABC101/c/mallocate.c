#include <stdio.h>

int main(void){
    int memsize = 0;
    for(int i = 0; i < 100000; i++){
        memsize += i / 10 + 2;
    }
    printf("%d", memsize);
    return 0;
}
