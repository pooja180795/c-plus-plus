/* Kadanes algo = Optimised greedy algo
Problem: Given an integer array nums, find the subarray with the largest sum, and return its sum.

Constraints:

    1 <= nums.length <= 10^5
    -10^4 <= nums[i] <= 10^4
*/

#include <iostream>
#include <climits>
#include <vector>
using namespace std;

class SubArrSum{
public:
    int currSum = 0, maxSum = INT_MIN;

    int doSum(vector<int>& arr)
    {
        for(int i = 0; i < arr.size(); i++)
        {
            currSum += arr[i];
            maxSum = max(currSum, maxSum);

            if(currSum < 0)
            {
                currSum = 0;
            }
        }
        return maxSum;
    }
};

int main()
{
    SubArrSum s1;
    vector<int> arr = {-2, -3, -4, -1, -3, -2, -12};
    cout << s1.doSum(arr) << endl;
    return 0;
}