#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    int findSingleEle(vector<int>& arr){
        int n = arr.size();
        if(n == 1){
                return arr[0];
            }
        int st = 0, end = n - 1;
        while(st <= end){
            int mid = st + (end-st) / 2;
            if(mid == 0 && arr[mid] != arr[mid+1]){
                return arr[mid];
            }
            if(mid == n - 1 && arr[mid] != arr[mid-1]){
                return arr[mid];
            }
            if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]){
                return arr[mid];
            }
            if(mid % 2 != 0)  {                 // odd
                if(arr[mid] == arr[mid-1]){     //right
                    st = mid+1;
                }
                else{                           //left
                    end = mid-1;
                }
            }
            else{ //even
                if(arr[mid] == arr[mid-1]){     //left
               
                    end = mid-1;
                }
                else{                           //right
                    st = mid+1;
                }
            }
        }
        return -1;
    }
};

int main(){
    Solution s;
    vector<int> arr = {3,3,7,7,10,11,11};
    cout << s.findSingleEle(arr) << endl;
    return 0;
}