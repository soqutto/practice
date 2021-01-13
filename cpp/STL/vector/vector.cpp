#include <iostream>
#include <vector>

template <typename T>
void vector_dump(std::vector<T> v){
    for(int i = 0; i < v.size(); ++i)
        std::cout << "element #" << i << ": " << v[i] << std::endl;
}

int main(void){
    std::vector<int> A(10);
    std::vector<double> B(5);
    std::vector<std::string> S = {"A", "B", "C", "D", "E"};
    vector_dump(A);
    vector_dump(B);
    for(int i = 0; i < A.size(); ++i) A[i] = i * 2;
    for(int i = 0; i < B.size(); ++i) B[i] = i * 2.5;
    vector_dump(A);
    vector_dump(B);
    vector_dump(S);
    return 0;
}
