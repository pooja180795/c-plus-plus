#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    int BSinSortedArr(vector<int>& arr, int target){
        int n = arr.size();
        int st = 0, end = n-1;
        while(st <= end){
            int mid = st + (end-st) / 2;
            if(arr[mid] == target){
                return mid;
            }
            if(arr[st] <= arr[mid]){   // left part is sorted
                if(target >= arr[st] && target < arr[mid]){
                    end = mid-1;           // lokk right
                }
                else{                    //right sorted
                    st = mid +1;
                }
            }
            else{     // right is sorted
                if(target > arr[mid] && target <= arr[end]){     //look right
                    st = mid+1;
                }
                else{
                    end= mid-1;
                }
            }
        }
        return -1;
    }
};

int main(){
    Solution s;
    vector<int> arr = {3,4,5,6,7,0,1,2};
    int target = 3;
    cout << "index = " << s.BSinSortedArr(arr, target) << endl;
    return 0;
}