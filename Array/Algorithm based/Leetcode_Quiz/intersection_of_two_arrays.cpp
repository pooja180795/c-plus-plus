class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> m1;
        unordered_map<int, int> m2;

        for(int val : nums1){
            m1[val]++;
        }
        for(int val : nums2){
            m2[val]++;
        }
        for(auto pair : m1){
            if(m1[pair.first] == m2)
        }
    }
};