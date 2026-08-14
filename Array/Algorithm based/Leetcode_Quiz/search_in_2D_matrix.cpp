/*
You are given an m x n integer matrix matrix with the following two properties:

    Each row is sorted in non-decreasing order.
    The first integer of each row is greater than the last integer of the previous row.

Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchInRow(vector<vector<int>>& matrix, int r, int end, int target){
        int st = 0;
        while(st <= end){
            int mid = st + (end- st)/2;
            if(matrix[r][mid] == target){
                return true;
            }
            else if(matrix[r][mid] < target){
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int sRow = 0;
        int eRow = m - 1;
        while(sRow <= eRow){
            int mRow = sRow + (eRow- sRow)/2;
            if(target < matrix[mRow][0]){
                eRow = mRow - 1;
            }
            else if(target >= matrix[mRow][0] && target <= matrix[mRow][n-1]){
                //row found
                return searchInRow(matrix, mRow, n-1, target);
            }
            else{
                sRow = mRow + 1;
            }
        }
        return false;
    }
};

int main(){
    Solution s;
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 3;
    cout << s.searchMatrix(matrix, target) << endl;
} 