class Solution {
public:
vector<int> findDisappearedNumbers(vector<int>& nums) {
int n = nums.size();
vector<int> ans;
unordered_map<int, int> m;
for(int i=1; i<= n; i++)
{
m[i]= 0;
}
for(int i= 0; i< n; i++){
m[nums[i]]++;
}
for(auto pair: m){
if(pair.second == 0){
ans.push_back(pair.first);
}
}
return ans;
}
};
