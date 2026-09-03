/*Given two integer arrays nums1 and nums2, return an array of their intersection . Each element in the result must be unique and you may 
eturn the result in any order.
*/
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {  // O(n+m)
        unordered_map<int, int> m1;
        unordered_map<int, int> m2;
        vector<int> ans;
        for(int val : nums1){
            m1[val]++;
        }
        for(int val : nums2){
            m2[val]++;
        }
        for(auto pair : m1){
            if(m2.find(pair.first) != m2.end()){
                ans.push_back(pair.first);
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> nums1 = {1,2,2,1,4,5,7};
    vector<int> nums2 = {2,2,3,5};
    vector<int> ans;
    ans = s.intersection(nums1,  nums2);
    for(int val : ans){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}