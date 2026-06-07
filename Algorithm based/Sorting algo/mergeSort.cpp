#include <iostream>
#include <vector>
using namespace std;

void mergeSort(vector<int>& arr, int left, int right){
    
    if(left == right){ 
        return;
    }

    int mid = (left + right) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid+1, right);

    merge(arr, left, right);
}

void merge(vector<int>& arr, int left, int right){
    if(right > left){
        if(arr[left] > arr[right]){
            swap(arr[left], arr[right]);
            return;
        }
    }
    return;
}

int main(){
    vector<int> arr = {2,4,7,1,2,6};
    int n = arr.size();
    mergeSort(arr, 0, n-1);
    return 0;
}