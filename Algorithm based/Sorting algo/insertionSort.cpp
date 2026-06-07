#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& arr){
    int n = arr.size();
    int total_steps= 0;
    for(int i = 1; i < n; i++){ total_steps++;
        int key = arr[i];
        int j = i-1;
        
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    cout << "total steps= " << total_steps << endl;
}



int main(){
    vector<int> arr = {9,8,7,6,5,4,3,2,1};
    insertionSort(arr);
    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}