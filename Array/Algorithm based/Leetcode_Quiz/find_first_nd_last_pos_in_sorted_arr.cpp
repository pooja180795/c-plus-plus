/*
Q-34
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.
Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]

Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]

Example 3:

Input: nums = [], target = 0
Output: [-1,-1]

*/
#include<iostream>
#include<vector>
using namespace std;
class Solution {

public:
    int findFirst(vector<int>& nums, int st, int end, int tar){     //tc=log(n)
        int ans = -1;
        while(st<= end){
            int mid = st + (end-st)/2;
            if(nums[mid] == tar){
                ans = mid;
                end = mid-1;
            }
            else if (nums[mid] < tar){
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return ans;
    }

    int findLast(vector<int>& nums, int st, int end, int tar){      //tc=log(n)
        int ans = -1;
        while(st<= end){
            int mid = st + (end-st)/2;
            if(nums[mid] == tar){
                ans = mid;
                st = mid+1;
            }
            else if (nums[mid] < tar){
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {   //tc=log(n)
        int st = 0;
        int end = nums.size()-1;
        int first = findFirst(nums, st, end, target);
        int last = findLast(nums, st, end, target);

        return {first, last};
    }
};

int main(){
    Solution s;
    vector<int> nums = {2,3,7,8,8,8,8,8,8,9};
    int target = 8;
    vector<int> ans =  s.searchRange(nums, target);
    for(int val : ans){
        cout << val << " ";
    }
    cout << endl;
}