#include <iostream>
#include <vector>
using namespace std;


// Iterative method => time-complexity O(logn), space-complexity = O(1)
int binSearch(vector<int>& arr, int target){
    int start = 0;
    int end = arr.size() - 1;
    while(start <= end){
        int mid = (end+start)/ 2;
        if(arr[mid] < target){
            start = mid + 1;
        }
        else if(arr[mid] > target){
            end = mid - 1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {-1, 0, 3,4,5,9,12};
    int target = 9;
    cout << "index = " << binSearch(arr, target) << endl;
    
    return 0;
}

// Recursive method => time-complexity O(logn), space-complexity = O(logn)
// int binSearch(vector<int> arr,int target, int start, int end){
//     while(start <= end){
//         int mid = start + (end-start) / 2;
//         if(target < arr[mid]){
//             return binSearch(arr, target, start, mid-1);
//         }
//         else if(target > arr[mid]){
//             return binSearch(arr, target, mid+1, end);
//         }
//         else{
//             return mid;
//         }
//     }
//     return -1;
// }

// int main(){
//     vector<int> arr = {-9, -1, 0, 1, 7, 9, 60, 78};
//     int target = 60;
//     int start = 0, end = arr.size() - 1;
//     cout << "index= " << binSearch(arr, target, start, end) << endl; 
//     return 0;
// }