/*
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

n == nums.length
1 <= n <= 300
nums[i] is either 0, 1, or 2.

Follow up: Could you come up with a one-pass algorithm using only constant extra space?
*/

/*  assume total 4 partitions
    - 0 to low-1 = for 0
    - low to mid-1 = for 1
    - mid to high = randoms 0,1,2
    - high+1 to n-1 = for 2

    and at the start all are randoms so start with low=mid=0 and high = n-1 :)
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
	void test(vector<int>& arr){                    //O(n)
        int n = arr.size();
        int low = 0, mid = 0, high = n-1;
        while(mid <= high){                         //O(n)
            if(arr[mid] == 0){
                swap(arr[low], arr[mid]);
                low++;
                mid++;
            }
            else if(arr[mid] == 1){
                mid++;
            }
            else{
                swap(arr[mid], arr[high]);
                high--;
            }
        }
	}
    void printarr(vector<int>& arr){
        for(int val : arr){
            cout << val << " ";
        }
        cout << endl;
    }
};

int main(){
    Solution s;
    vector<int> arr = {2,2,2,2,0,0,0,0,1,1,1,1,1,1,1};
    s.test(arr);
    s.printarr(arr);
    return 0;
}