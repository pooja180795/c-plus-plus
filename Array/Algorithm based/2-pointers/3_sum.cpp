/*
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

important: we are using 2 pointers approach because its most optimal
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include<set>
using namespace std;

int main(){                                 // time- O(n^2 + nlog(n)), space - O(unique triplets)
    vector<int> nums= {-2,-2,-2,-2,-2,-2,4,-2,-2,-2};
    sort(nums.begin(), nums.end());         // O(nlog(n)
    int n = nums.size();
    vector<vector<int>> vec;

    for(int i = 0; i < n; i++){             // O(n^2)
        int target = -nums[i];
        
        if(i > 0 && nums[i] == nums[i-1]){
            continue;
        }
        int st = i+1;
        int end = n-1;
        while(st < end){
            if(target == nums[st] + nums[end]){
                vec.push_back({nums[i], nums[st], nums[end]});
                st++;
                end--;
                if(st < end && nums[st] == nums[st-1]){
                    st++;
                }
            }
            else if(target < nums[st] + nums[end]){
                end--;
            }
            else{
                st++;
            }
        }  
        
    }

for(auto v : vec){
    for(int val : v){
        cout << val << " ";
    }
    cout << endl;
}
    return 0;
}