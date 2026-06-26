#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& arr){        //O(n^2)
    int n = arr.size();
    int total_steps = 0;
    for(int i = 0; i < n; i++){
        total_steps++;
        int min_index = i;
        for(int j = i+1; j < n; j++){
            total_steps++;
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
    }
    cout << "total steps= " << total_steps << endl;
}

int main(){
    vector<int> arr = {9,8,7,6,5,4,3,2,1};
    selectionSort(arr);
    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}