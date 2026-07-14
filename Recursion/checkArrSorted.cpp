#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> arr, int n){      //TC = O(n) and SC = O(n)
    if(n == 0 || n == 1){                   //base case
        return true;
    }
    return (arr[n-1] >= arr[n-2] && isSorted(arr, n-1));
}

int main(){
    vector<int> arr = {1,2,3,14,5};
    int n = arr.size();
    cout << isSorted(arr, n) << endl;;
    return 0;
}