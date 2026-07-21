#include <iostream>
#include <vector>
using namespace std;

void allPermutations(vector<int>& nums, int n, int i, vector<vector<int>>& ans){
    if(i == n){                     // base case
        ans.push_back({nums});
        return;
    }

    for(int idx = i; idx < n; idx++){
        //include 
        swap(nums[idx], nums[i]);
        allPermutations(nums, n, i+1, ans);
        //backtrack
        swap(nums[idx], nums[i]);
    }
}


int main(){
    vector<int> nums = {7,8,9};
    int n = nums.size();
    vector<vector<int>> ans;
    allPermutations(nums,n, 0, ans);
    for(vector<int> vec : ans){
        for(int val : vec){
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}