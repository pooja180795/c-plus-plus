/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){      //  O(n)
    unordered_map<int, int> m;
    vector<int> ans;

    for(int i = 0; i < nums.size(); i++){               //  O(n)
        int first = nums[i];
        int second = target - first;

        if(m.find(second) != m.end()){                  //  O(k) = constant
            // second is found
            ans.push_back(i);
            ans.push_back(m[second]);
            break;
        }
        
        m[first] = i;
    }
    return ans;
    
}

int main(){
    vector<int> nums = {2,14,6,8,4};
    int target = 12;
    vector<int> ans = twoSum(nums, target);
    for(int val : ans){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}