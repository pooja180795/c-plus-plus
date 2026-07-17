/*
Given an integer array nums of length n and an integer target, find three integers at distinct indices in nums such that the sum is closest to target.

Return the sum of the three integers.

You may assume that each input would have exactly one solution.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int tar) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int best = nums[0] + nums[1] + nums[2];
        
        for(int i = 0; i < n-2; i++){
            int st = i+1;
            int end = n-1;
            while(st < end){
                int sum = nums[i] + nums[st] + nums[end];
                if(abs(tar - sum) < abs(tar - best)){
                    best = sum;
                }
                if(sum < tar) { st++; }
                else if(sum > tar) { end--; }
                else { return sum; }    // sum = target
            }
        }
        return best;
    }
};

int main(){
    Solution s;
    vector<int> nums = {-1,2,1,-4};
    int target = 1;
    cout << s.threeSumClosest(nums, target) << endl;
    return 0;
}