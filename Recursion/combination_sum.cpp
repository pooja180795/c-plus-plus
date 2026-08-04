/*
Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the of at least one of the chosen numbers is different.

The test cases are generated such that the number of unique combinations that sum up to target is less than 150 combinations for the given input.
*/

#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution{
public:
    set<vector<int>> s;
    void combiSum(vector<int>& nums, int i, vector<int>& combin, vector<vector<int>>& ans, int tar){
        if(tar < 0 || i == nums.size()){
            return;
        }
        if(tar == 0){
            if(s.find(combin) == s.end()){
                s.insert(combin);
                ans.push_back(combin);
                return;
            }
        }
        
        combin.push_back(nums[i]);
        combiSum(nums, i+1, combin, ans, tar- nums[i]);
        combiSum(nums, i, combin, ans, tar-nums[i]);
        combin.pop_back();
        combiSum(nums, i+1, combin, ans, tar);
    }
};

int main(){
    Solution s;
    vector<int> nums = {2,3,5};
    int target = 8;
    vector<int> combin;
    vector<vector<int>> ans;
    s.combiSum(nums, 0, combin, ans, target); 
    for(vector<int> vec : ans){
        for(int val : vec){
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}