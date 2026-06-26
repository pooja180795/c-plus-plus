// bubble sort will take same steps in worst-case and best-case. but we can break the loop in best case.

#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr){           //O(n^2)
    int n = arr.size();
    int total_steps = 0;
    for(int i = 0 ; i < (n-1); i++){
        total_steps++;
        bool swapped = false;
        for(int j = 0; j < (n-i-1); j++){
            total_steps++;
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        cout << "total steps= " << total_steps << endl;
        if(!swapped){ return; }
    }
    
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    bubbleSort(arr);
    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}