#include <iostream>
#include <vector>
using namespace std;

int binSearch(vector<int> arr, int tar, int st, int end){       // TC = SC = O(log n)
    if(st <= end){
        int mid = st + (end-st)/ 2;
        if(arr[mid] == tar) return mid;
        else if(arr[mid] < tar) { return binSearch(arr, tar, mid+1, end); } 
        else { return binSearch(arr, tar, st, mid-1); }
    }
    return -1;              //base case
}

int main(){
    vector<int> arr = {2, 13, 41, 53, 66};
    int tar = 616;
    int n = arr.size();
    int st = 0;
    int end = n-1;
    cout << binSearch(arr, tar, st, end) << endl;
    return 0;
}