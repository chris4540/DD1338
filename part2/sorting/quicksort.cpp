// The another implementation in C+=
#include <iostream>
#include <vector>
using namespace std;

vector<string> getStringArr(){
    vector<string> ret{"Blue", "Red", "Orange", "Yellow"};
    return ret;
}

int main(){

    // Initialize String Array
    vector<string> colour = getStringArr();

    // Print Strings
    for (int i = 0; i < 4; i++)
        cout << colour[i] << "\n";
}
