#include "utils.hpp"

using namespace std;

template <typename T>
void printVec(vector<T>& vec){
    int size = vec.size();
    cout << "[";
    for (size_t i=0; i < size-1; ++i){
        T e = vec[i];
        cout << e;
        cout << ", ";
    }
    // print the last element
    cout << vec[size-1];
    cout << "]";
    cout << endl;
}