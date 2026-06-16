/*
You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.

Return the index of the peak element.

Your task is to solve it in O(log(n)) time complexity.

Constraints:

    3 <= arr.length <= 10^5
    0 <= arr[i] <= 10^6
    arr is guaranteed to be a mountain array.

*/

#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    int peakIndex(vector<int>& arr){
        int st = 2, end = arr.size()-2; // as arr is guaranteed to be a mountain array. first and last index can not be peak index

        while(st <= end){
            int mid = st + (end-st) / 2;
            if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
                return mid;
            }
            if(arr[mid] > arr[mid-1]){
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return -1;
    }
};

int main(){
    Solution s;
    vector<int> arr = {0,3,5,8,18,20,16,15,13,12,11};
    cout << s.peakIndex(arr) << endl;
    return 0;
}