// Return pair in sorted array with target sum

#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    vector<int> pairSum(vector<int> arr, int target)
    {
        vector<int> pairArr;
        int start = 0;
        int end = arr.size() - 1;

        while(start < end)
        {
            if(arr[start] + arr[end] < target)
            {
                start++;
            }
            else if(arr[start] + arr[end] > target)
            {
                end--;
            }
            else
            {
                pairArr.push_back(start);
                pairArr.push_back(end);
                return pairArr;
            }
        }
        return pairArr;
    }
};

int main()
{
    Solution s;
    vector<int> arr = {1,34,56,78,99,103,105};
    int target = 100;
    vector<int> pairArr = s.pairSum(arr, target);

    for(int val : pairArr)
    {
        cout << val << " ";
    }
    return 0;
}