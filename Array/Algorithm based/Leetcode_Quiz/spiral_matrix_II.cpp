class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int> ans;
        int row = n-1;
        int col = n-1;
        int currRow = 0, currCol = 0;
        int ele = 1;

        while(currCol <= col){
            ans[currRow][currCol] = ele;
            ele++;
            currCol++;
        }
        currRow++;
        curCol--;
        while(currRow <= row){
            ans[currRow][currCol] = ele;
            ele++;
            currRow++;
        }
        currRow--;
        while(currCol >= 0){
            ans[currRow][currCol] = ele;
            ele++;
            currCol--;
        }
        currCol++;
        while(currRow > 0){
            ans[currRow][currCol] = ele;
            ele++;
            currRow--;
        }
    }
};