/*
Given an integer array nums, return the number of triplets chosen from the array that can make triangles
if we take them as side lengths of a triangle.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int triNumber(vector<int>& arr){
    int n = arr.size();
    int triangle = 0;
    sort(arr.begin(), arr.end());
    for(int i = n-1; i > 0; i--){
        int st = 0; int end = i-1;
        while(st < end){
            if(arr[i] >= arr[st] + arr[end]){
                st++;
            }
            else if(arr[i] < arr[st] + arr[end]){
                triangle += end-st;
                end--;
            }
        }
    }
    return triangle;
}

int main(){
    vector<int> arr = {4,2,3,4};
    cout << triNumber(arr) << endl;
    return 0;
}