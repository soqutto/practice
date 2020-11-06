#include <iostream>
#include <vector>

int main(void){
    std::vector<int> v(10);
    for(std::vector<int>::iterator it = v.begin(); it < v.end(); it++){
        std::cin >> *it;
    }
    int i;
    for(auto it = v.begin(), i = 0; it < v.end(); it++, i++){
        std::cout << "input #" << i << ": " << *it << std::endl;
    }

    return 0;
}
