// The another implementation in C+=
#include <iostream>
#include <vector>
using namespace std;

vector<string> getStringArr(){
    // vector<string> ret{"Blue", "Red", "Orange", "Yellow"};
    // vector<string> ret{"S", "O","R","T","E","X","A","M","P","L","E"};
    vector<string> ret{
        "K","R","A","T","E","L","E","P","U","I","M","Q","C","X","O","S"
        };
    return ret;
}

int partition(vector<string>& vec, int lo, int hi){
    return 1;
}

// quick sort implementation
void qsort(vector<string>& vec, int lo, int hi){
    if (hi <= lo){
        return;
    }
    int pivot = partition(vec, lo, hi);
    qsort(vec, lo, pivot-1);
    qsort(vec, pivot+1, hi);
}

void sort(vector<string>& vec){
    // shuffe the array to aviod going to worse case (O(n^2))
    //

    // sort the input array
    qsort(vec, 0, vec.size() - 1);
}

template <typename T>
void printVec(vector<T>& vec){
    int size = vec.size();
    cout << "[";
    for (size_t i=0; i < size-2; ++i){
        T e = vec[i];
        cout << e;
        cout << ", ";
    }
    // print the last element
    cout << vec[size-1];
    cout << "]";
    cout << endl;
}


int main(){
    // Initialize String Array
    vector<string> vector = getStringArr();
    printVec(vector);
    // sort(array);


    // // // Print Strings
    // // for (string s: array){
    // //     cout << s;
    // //     cout << ",";
    // // }
    // // cout << endl;

    return 0;
}
