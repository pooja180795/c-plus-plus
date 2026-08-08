/*  normal tc = O(n log(n))
    but worst case tc = O(n^2), if pivot is the largest every-time
    sc = O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& arr, int st, int end){
    int idx = st-1;
    int pivot = arr[end];
    for(int j = st; j < end; j++){
        if(arr[j] <= pivot){
            idx++;
            swap(arr[idx], arr[j]);
        }
    }
    idx++;
    swap(arr[idx], arr[end]);
    return idx;
}

void quickSort(vector<int>& arr, int st, int end){
    if(st < end){
        int pivIndex = partition(arr, st, end);
        quickSort(arr, st, pivIndex-1);     // left half
        quickSort(arr, pivIndex+1, end);    // right half
    }
}

int main(){
    vector<int> arr = {9,2,6,1,8,3,4};
    int st = 0;
    int end = arr.size() - 1;
    quickSort(arr, st, end);
    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}