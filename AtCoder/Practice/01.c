#include <stdio.h>

int main(void){
    int a, b, c;
    char s[101];

    scanf("%d", &a);
    scanf("%d %d", &b, &c);
    scanf("%s", s);

    int sum = a+b+c;
    printf("%d %s\n", sum, s);
    return 0;
}
