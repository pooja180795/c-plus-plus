/*
You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.

n == height.length
2 <= n <= 10^5
0 <= height[i] <= 10^4

*/


#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    int maxWater(vector<int>& height){
        int n = height.size();
        int left = 0;
        int right = n;
        int currWater;
        int maxWater = 0;
        int w, h;

        while(left < right){
            w = right - left;
            h = min(height[left], height[right]);
            currWater = w * h;
            maxWater = max(maxWater, currWater);
            if(height[left] <= height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxWater;
    }
};

int main(){
    Solution s;
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << s.maxWater(height) << endl;
    return 0;
}