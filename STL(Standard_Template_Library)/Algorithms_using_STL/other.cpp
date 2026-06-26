#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5};
    cout << "is available = " << binary_search(arr.begin(), arr.end(), 4) << endl;   // if 4 is available return 1
    cout << "is available = " << binary_search(arr.begin(), arr.end(), 10) << endl;  // if 10 is not available return 0

    cout << "max = " << *(max_element(arr.begin(), arr.end())) << endl;     // max 5
    cout << "min = " << *(min_element(arr.begin(), arr.end())) << endl;     // min 1

    // cout 1's or set bits
    int n = 15;
    long n1 = 15;
    long long n2 = 16;

    cout << "1's in " << n << " = " << __builtin_popcount(n) << endl;                      // number of 1's in 15 = bin(1111) = 4
    cout << "1's in " << n1 << " = " << __builtin_popcountl(n1) << endl;                      // number of 1's in 15 = bin(1111) = 4
    cout << "1's in " << n2 << " = " << __builtin_popcountll(n2) << endl;                      // number of 1's in 16 = bin(10000) = 1
    return 0;
}