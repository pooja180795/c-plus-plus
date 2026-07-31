class Solution {
public:
    bool isSafe(vector<vector<char>& board, int r, int c){
        int n = board.size();
        char dig = board[r][c];
        for(int j=0; j<n & j!= c; j++)
            {
                if(board[r][j] == dig ){
                    return false;
                }
            }
        for(int i=0; i<n & i!= r; i++)
            {
                if(board[i][c] == dig ){
                    return false;
                }
            }
        int sr= (r/3)*3;
        int sc= (c/3)*3;
        for(int i= r; i<= sr+2; i++){
            for(int j= c; j<= sc+2; j++)
                {
                    
                }
                }
    }
    bool checkRow(vector<vector<char>>& board, int r){
        if(r > 8){
            return true;
        }
        int n = board.size();
        for(int j= 0; j< n; j++){
            if(board[r][j] != '.'){
                if(!isSafe(board, r, j)){ return false;
                    
                }
            }
        }
        checkRow(board, r+1);
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        checkRow(board, 0);
    }
};
