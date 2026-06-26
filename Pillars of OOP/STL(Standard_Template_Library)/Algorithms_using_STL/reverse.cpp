#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int arr[] = {2,3,11,4,1};                      
    //reverse(arr, arr+5);                        // reverse 1 4 11 3 2

    for(int val : arr){
        cout << val << " ";
    }

    // with range
    reverse(arr +1, arr+3);                     //ans 2 11 3 4 1
    cout << endl;

    return 0;
}