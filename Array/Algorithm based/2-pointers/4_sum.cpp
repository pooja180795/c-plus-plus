/*
Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

    0 <= a, b, c, d < n
    a, b, c, and d are distinct.
    nums[a] + nums[b] + nums[c] + nums[d] == target

You may return the answer in any order.*/

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {    //O(n^3 + nlogn)
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());                     //O(nlogn)

        for(int i = 0; i < n-1; i++){                       //O(n)
            if(i > 0 && nums[i] == nums[i-1]) continue;     
            for(int j = i+1; j < n;){                       //O(n)
                int st = j+1;
                int end = n-1;
                while(st < end){                            //O(n)
                    long long sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[st] + (long long)nums[end];
                    if(target < sum){ end--; }
                    else if(target > sum){ st++; }
                    else{
                        ans.push_back({nums[i], nums[j], nums[st], nums[end]});
                        st++;
                        end--;
                        while(st < end && nums[st] == nums[st-1]) st++;
                    }
                }
                j++;
                while(j < n && nums[j] == nums[j-1]) j++;
            }
        }

        return ans;
    }
};

int main(){
    Solution s;
    vector<int> nums = {-2,-1,1,2,0,0};
    int target = 0;
    vector<vector<int>> ans = s.fourSum(nums, target);
    for(auto vec : ans){
        for(int val : vec){
            cout << val << " ";
        }
        cout << endl;
    }
}