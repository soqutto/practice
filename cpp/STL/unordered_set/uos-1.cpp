#include <iostream>
#include <unordered_set>

template <typename T>
void unordered_set_dump(std::unordered_set<T> uos){
    for(auto& u : uos) std::cout << u << std::endl;
}

int main(){
    std::unordered_set<int> uos;

    for(int i = 0; i < 10; ++i){
        int rnd = std::rand() % 10 + 1;
        uos.insert(rnd);
        std::cout << "randint #" << i << ": " << rnd << std::endl;
    }

    unordered_set_dump(uos);
    
    return 0;
}
