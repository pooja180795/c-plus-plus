#include <iostream>
#include <vector>
using namespace std;

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
            return arr[mid];
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {-1, 0, 3,4,5,9,12};
    int target = 120;
    cout << binSearch(arr, target) << endl;
    
    return 0;
}