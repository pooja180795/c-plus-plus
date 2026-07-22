class Solution {
public:
    bool isSafe(vector<string>& board, int row, int col, int n){
        //row check
        for(int r = 0; r <= row; r++){
            if(board[r][col] == 'Q'){
                return false;
            }
        }
        //col check
        for(int c = 0; c <= col; c++){
            if(board[row][c] == 'Q'){
                return false;
            }
        }
        //upper left diagonal
        for(int r = row, c = col; r >= 0, c >= 0; r--, c--){
            if(board[r][c] == 'Q'){
                return false;
            }
        }
        //upper right diagonal
        for(int r = row, c = col; r >= 0, c < n; r--, c++){
            if(board[r][c] == 'Q'){
                return false;
            }
        }
        return true;
    }
    void placeInRow(vector<string>& board, int row, int n, vector<vector<string>>& ans){
        if(row == n){
            //base case
            ans.push_back({row});
            return;

        }
        for(int j = 0; j < n; j++){
            if(isSafe(board, row, j, n)){
                board[row][j] = 'Q';
                placeRow(board, row+1, n);
                board[row][j] = '.';
            }

        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n,'.'));
        vector<vector<string>> ans;
        
        placeInRow(board, 0, n, ans);
        return ans;
    }
};