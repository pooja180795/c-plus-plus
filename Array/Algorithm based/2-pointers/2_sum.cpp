#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> two_sum(vector<int>& arr, int target){
    int n = arr.size();
    vector<int> ans;
    int st = 0;
    int end = n-1;
    while(st < end){
        int sum = arr[st] + arr[end];
        if(sum == target){
            ans.push_back(st+1);
            ans.push_back(end+1);
            return ans;
        }
        else if(sum < target){
            st++;
        }
        else{
            end--;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {2,7,11,15};
    int target = 26;
    vector<int> ans = two_sum(arr, target);
    for(int val : ans){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}