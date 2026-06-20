#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& arr){         //O(n^2)
    int n = arr.size();
    for(int i = 1; i < n; i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev >= 0 && arr[prev] > curr){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }
}



int main(){
    vector<int> arr = {9,18,17,6,5,14,3,2,1};
    insertionSort(arr);
    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}