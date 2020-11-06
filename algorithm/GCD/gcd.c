#include <stdio.h>
#include <stdlib.h>

long long GCD(long long a, long long b){
    if (b == 0) return a;
    else return GCD(b, a%b);
}

int main(){
    char strA[100], strB[100];
    gets(strA);
    gets(strB);

    int num1 = atoi(strA);
    int num2 = atoi(strB);

    if (num1 < num2){
        int tmp = num2;
        num2 = num1;
        num1 = tmp;
    }
    printf("gcd: %lld\n", GCD(num1, num2));
    return 0;
}
