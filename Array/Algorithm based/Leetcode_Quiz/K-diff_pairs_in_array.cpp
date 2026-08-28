/*
Given an array of integers nums and an integer k, return the number of unique k-diff pairs in the array.

A k-diff pair is an integer pair (nums[i], nums[j]), where the following are true:

    0 <= i, j < nums.length
    i != j
    |nums[i] - nums[j]| == k

Notice that |val| denotes the absolute value of val.

Example 1:

Input: nums = [3,1,4,1,5], k = 2
Output: 2
Explanation: There are two 2-diff pairs in the array, (1, 3) and (3, 5).
Although we have two 1s in the input, we should only return the number of unique pairs.

Example 2:

Input: nums = [1,2,3,4,5], k = 1
Output: 4
Explanation: There are four 1-diff pairs in the array, (1, 2), (2, 3), (3, 4) and (4, 5).

Example 3:

Input: nums = [1,3,1,5,4], k = 0
Output: 1
Explanation: There is one 0-diff pair in the array, (1, 1).

 
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {               // tc = O(n log(n)), sc = O(n)
        int ans = 0;
        int first = 0;
        int last = 1;
        int n = nums.size() - 1;
        sort(nums.begin(), nums.end());
        unordered_map<int, int> m;
        for(int val: nums){
            m[val]++;
        }
    
        while(last <= n){
            if(first == last){
                last++;
                continue;
            }
            int diff = nums[last] - nums[first];
            if(diff < k){
                last++;
            }
            else if(diff > k){
                first++;
            }
            else{
                ans++;
                first = first + m[nums[first]];
                last = last + m[nums[last]];
                
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> nums = {3,1,4,1,5};
    int k = 2;
    cout << s.findPairs(nums, k) << endl;
    return 0;
}

/*
#solution tc = sc = O(n)
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        int ans = 0;
        for(int val : nums){
            m[val]++;
        }

        for(auto pair : m){
            int curr = pair.first;
            if(k == 0){
                if(m[curr] > 1){
                    ans++;
                }
            }
            else if(m.find(curr + k) != m.end()){
                ans++;
            }
        }
        return ans;
    }
};
*/