#include <iostream>
#include <vector>

template <typename T>
void printVec(std::vector<T>& vec){
    int size = vec.size();
    std::cout << "[";
    for (size_t i=0; i < size-1; ++i){
        T e = vec[i];
        std::cout << e;
        std::cout << ", ";
    }
    // print the last element
    std::cout << vec[size-1];
    std::cout << "]";
    std::cout << std::endl;
}