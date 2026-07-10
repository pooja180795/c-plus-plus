#include <iostream>
#include <vector>
using namespace std;

int subArrayCount(vector<int>& nums, int target){
    int count = 0;
    int n = nums.size();
    
    int maxSum = INT16_MIN;
    for(int st = 0; st < n; st++){
        int sum = 0;
        for(int end = st; end < n; end++){
            sum += nums[end];
            if(sum == target){
                count++;
            }
        }
    }
    return count;
}

int main(){
    vector<int> nums = {-9,244,-20,3,10,5};
    int target = 15;
    cout << subArrayCount(nums, target) << endl;
    return 0;
}