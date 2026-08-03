/*
NOTE: ================currently tc = O(n * k). YOU NEED TO MAKE IT O(n)=====================
Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.
*/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        vector<int> ans;
        int maxFreq = INT_MIN;
        for(int val : nums){
            m[val]++;
        }

        while(k > 0){
            int maxEle;
            for(auto pair: m){
                if(pair.second > maxFreq){
                    maxFreq = pair.second;
                    maxEle = pair.first;
                }
            }
            m[maxEle] = 0;
            ans.push_back(maxEle);
            maxFreq = INT_MIN;
            k--;
        }
    return ans;
    }
};

int main(){
    Solution s;
    vector<int> nums = {3,4,4,4,2,2,1,1,1};
    int k = 2;
    vector<int> ans  = s.topKFrequent(nums, k);
    for(int val : ans){
        cout << val << " ";
    }
    cout << endl;
}