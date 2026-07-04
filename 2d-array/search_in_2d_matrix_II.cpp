/*Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

    Integers in each row are sorted in ascending from left to right.
    Integers in each column are sorted in ascending from top to bottom.
*/

#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target){        //O(m+n)
    int m = matrix.size();
    int n = matrix[0].size();

    /* matrix[0][0] will be min number and matrix[m-1][n-1] will be max,so
     we will start guess from remaining 2 corner to reduce posibilities check */
    int r = m-1;
    int c = 0;

    while(r >= 0 && c < n){
        if(target == matrix[r][c]){
            return true;
        }
        else if(target < matrix[r][c]){
            r--;
        }
        else{
            c++;
        }
    }
    return false;
}

int main(){
    vector<vector<int>> matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int target = 12;
    cout << searchMatrix(matrix, target) << endl;
    return 0;
}