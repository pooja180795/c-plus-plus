class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        set<int, int> s;
        sort(nums.begin(), nums.end());
        int st = 0, end = nums.size()-1;
        while(st < end){
            if(abs(nums[st]-nums[end]) == k){
                s.insert({nums[st], nums[end]});
                st++;
                end--;
            }
            else if(abs(nums[st]-nums[end]) < k){
                st++;
            }
            else{
                end--;
            }
        }
        return s.size();
    }
};