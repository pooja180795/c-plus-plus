#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    int BSinSortedArr(vector<int> arr, int target){
        int st = 0, end = arr.size() - 1;
        while(st <= end){
            int mid = st + (end-st) / 2;

            if(arr[mid] == target){
                return mid;
            }

            //left sorted
            if(arr[st] <= arr[mid]){
                if(arr[st] <= target && target < arr[mid]){
                    end = mid-1;
                }   
                else{
                    st = mid+1;
                }
            }

            //right sorted
            else{
                if(arr[mid] < target && target <= arr[end]){
                    st = mid+1;
                }
                else{
                    end = mid-1;
                }
            }
        }
        return -1;
    }
};

int main(){
    Solution s;
    vector<int> arr = {3,4,5,6,7,0,1,2};
    int target = 5;
    cout << "index = " << s.BSinSortedArr(arr, target) << endl;
    return 0;
}