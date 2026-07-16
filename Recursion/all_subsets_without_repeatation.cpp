#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printSubsets(vector<int>& nums, vector<int>& vec, vector<vector<int>>& ans, int i){
    if(i == nums.size()){
        ans.push_back({vec});
        return;
    }

    vec.push_back(nums[i]);                 // O(2^n * n)
    printSubsets(nums, vec, ans, i+1);

    vec.pop_back();
    int idx = i+1;
    while(nums[idx] == nums[i]) idx++;
    printSubsets(nums, vec, ans, idx);
}

int main(){                                     // O(2^n * n) 
    vector<int> nums = {1,2,2};
    vector<int> vec;
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());             // O(nlogn)
    printSubsets(nums, vec, ans, 0);

    for(vector<int> vec : ans){
        for(int val : vec){
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}