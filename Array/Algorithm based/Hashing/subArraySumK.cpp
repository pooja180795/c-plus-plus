/*
Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

A subarray is a contiguous non-empty sequence of elements within an array.
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int subArrayCount(vector<int>& nums, int tar){      // O(n)
    int count = 0;
    int n = nums.size();
    vector<int> prefixSum(n, 0);
    prefixSum[0] = nums[0];
    unordered_map<int, int> m; 
    
    for(int i = 1; i < n; i++){
        prefixSum[i] = prefixSum[i-1] + nums[i];
    }
    for(int v : prefixSum){
        cout << v << " ";
    }
    cout << endl;

    for(int j = 0; j < n; j++){
        if(prefixSum[j] == tar){
            //cout << "in 1" << endl;
            count++;
        }
        int val = prefixSum[j] - tar;
        if(m.find(val) != m.end()){ //needed sum found
            //cout << "in 2" << endl;
            count += m[val]; 
        }
        if(m.find(prefixSum[j]) == m.end()){
            //cout << "in 2" << endl;
            m[prefixSum[j]] = 0;
        }
        m[prefixSum[j]]++;
    }

    for(auto pair : m){
        cout << pair.first << " " << pair.second << endl;
    }

    return count;
}

int main(){
    vector<int> nums = {9,4,0,20,3,10,5};
    int target = 33;
    cout << subArrayCount(nums, target) << endl;
    return 0;
}