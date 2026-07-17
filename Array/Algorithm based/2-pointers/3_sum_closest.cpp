class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int minDiff = INT_MAX;
        for(int i = 0; i < nums.size()-1; i++){
            int first = nums[i];
            for(int j = i+1; j < nums.size(); j++){
                int second = nums[i=j];
                int st = j+1;
                int end = nums.size()-1;
                while(st <= end){
                    int mid = st + (end-st)/2;
                    int curr = first + second + nums[mid];
                    int diff = curr - target;
                    minDiff = min(diff, minDiff);
                    if(diff < target){
                        st = mid+1;
                    }
                    else{
                        end = mid-1;
                    }
                }
            }
        }
        return minDiff;
    }
};