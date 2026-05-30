/* You are given an integer array nums that represents a circular array. Your task is to create a new array result of the same size, following these rules:
For each index i (where 0 <= i < nums.length), perform the following independent actions:

    If nums[i] > 0: Start at index i and move nums[i] steps to the right in the circular array. Set result[i] to the value at the index where you land.
    If nums[i] < 0: Start at index i and move abs(nums[i]) steps to the left in the circular array. Set result[i] to the value at the index where you land.
    If nums[i] == 0: Set result[i] to nums[i].

Return the new array result. */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(nums.size(), 0);
        for(int i = 0; i < n; i++)
        {
            result[i] = nums[(((i + nums[i]) % n) + n) % n];
        }
        return result;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 2, 3, -1, 5, -2};
    vector<int> result = s.constructTransformedArray(nums);

    for(int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " " ;
    }

    return 0;
}