/*
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and using only constant extra space. */

#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int>& nums){
    int slow = nums[0];
    int fast = nums[0];

    do{
        slow = nums[slow];
        fast = nums[nums[fast]];
    }while(slow != fast);

    slow = nums[0];

    while(slow != fast){
        slow = nums[slow];
        fast = nums[fast];
    }

    return fast;    //return either fats or slow because both are same
}

int main(){
    vector<int> nums = {1,3,1,2};
    cout << findDuplicate(nums) << endl;
    return 0;
}