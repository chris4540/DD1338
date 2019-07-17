// The another implementation in C++
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> getStringArr(){
    // vector<string> ret{"Blue", "Red", "Orange", "Yellow"};
    // vector<string> ret{"S", "O","R","T","E","X","A","M","P","L","E"};
    vector<string> ret{
        "K","R","A","T","E","L","E","P","U","I","M","Q","C","X","O","S"
        };
    return ret;
}

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

int partition(vector<string>& vec, int lo, int hi){
    // set iterators: left and right scan indices
    int i = lo;
    int j = hi + 1;
    string v = vec[lo];  // the pivot or partition item

    while(true){
        // scan from left to end
        while(vec[++i] < v) {
            if (i == hi) break;
        }
        while(v < vec[--j]){
            if (j == lo) break;
        }
        if (i >= j) break;
        swap(vec[i], vec[j]);
    }
    // swap the pivot
    swap(vec[lo], vec[j]);
    return j;
}

// -----------------------------------
// quick sort implementation
// -----------------------------------
void qsort(vector<string>& vec, int lo, int hi){
    if (hi <= lo){
        return;
    }
    int partIdx = partition(vec, lo, hi);
    qsort(vec, lo, partIdx-1);
    qsort(vec, partIdx+1, hi);
}

void sort(vector<string>& vec){
    // shuffe the array to aviod going to worse case (O(n^2))
    //

    // sort the input array
    qsort(vec, 0, vec.size() - 1);
}

int main(){
    // Initialize String Array
    vector<string> vector = getStringArr();
    printVec(vector);
    sort(vector);
    printVec(vector);
    return 0;
}
