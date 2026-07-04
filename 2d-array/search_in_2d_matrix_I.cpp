#include <iostream>
#include <vector>
using namespace std;

bool findInRow(vector<vector<int>>& matrix, int row, int target){
    int n = matrix[0].size();
    int st = 0, end = n-1;

    while(st <= end){
        int mid = st + (end-st)/2;
        if(matrix[row][mid] == target){
            return true;
        }
        else if(target < matrix[row][mid]){
            end = mid - 1;
        }
        else{
            st = mid + 1;
        }
    }
    return false;
}

bool searchMatrix(vector<vector<int>>& matrix, int target){         //O(log m + log n) = O(log(m*n))
    int m = matrix.size();      // total rows
    int n = matrix[0].size();   // total cols

    // search for row
    int rowStart = 0;
    int rowEnd = m - 1;

    while(rowStart <= rowEnd){
        int midRow = rowStart + (rowEnd - rowStart) / 2;
        if(target < matrix[midRow][0]){
            // up
            rowEnd = midRow - 1;
        }
        else if(target >= matrix[midRow][0] && target <= matrix[midRow][n-1]){
            // found row => now find in the row
            return findInRow(matrix, midRow, target);
        }
        else{
            // down
            rowStart = midRow + 1;
        }
    }
    return false;
}

int main(){
    vector<vector<int>> matrix = {  {2,7,8,9},
                                    {10,11,12,13},
                                    {23,56,78,100},
                                    {222,227,228,229},
                                    {310,311,315,399},
                                    {423,456,478, 500}};
    int target = 315;
    cout << searchMatrix(matrix, target) << endl;
    return 0;
}