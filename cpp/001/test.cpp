#include <vector>
#include <stdio.h>

int main(void){
    std::vector<int> vec{ 1,2,3 };
    for(auto &num:vec)
        printf("%d,", num);
    printf("\n");
    return 0;
}
