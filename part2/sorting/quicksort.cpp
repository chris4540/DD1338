// The another implementation in C+=
#include <iostream>
#include <vector>
using namespace std;

vector<string> getStringArr(){
    // vector<string> ret{"Blue", "Red", "Orange", "Yellow"};
    vector<string> ret{"S", "O","R","T","E","X","A","M","P","L","E"};
    return ret;
}

void sort(vector<string>& vec, int lo, int hi){
    return;
}

int partition(){
    return 1;
}



int main(){
    // Initialize String Array
    vector<string> array = getStringArr();

    // Print Strings
    for (string s: array){
        cout << s;
        cout << ",";
    }
    cout << endl;

    return 0;
}
