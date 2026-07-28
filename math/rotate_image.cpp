/*
You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {      // O(n^2)
        int n = matrix.size();
        for(int i = 0; i < n; i++){                 // transpose        O(n^2)
            for(int j = i+1; j < n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i = 0; i < n; i++){                 // reverse          O(n^2)
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};

int main(){
    Solution s;
    vector<vector<int>> matrix = {{1,2,3}, {4,5,6}, {7,8,9}};
    s.rotate(matrix);

    for(vector<int> vec : matrix){
        for(int val : vec){
            cout << val << " ";
        }
        cout << endl;
    }
}