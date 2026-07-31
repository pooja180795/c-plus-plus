/*
    Time-complexity:
    ->  for each row cell which is non-empty, there will be 9 (verticle) + 9 (horizontal) + 9 (grid) check
        so in worst case all n^2 = 81 cells will be non-empty, and for those 27 checks per cell so,
        81 * 27 = consant = O(1)
    Space-complexity:
    ->  Recursive depth = 9 row = n 
        for 9 cross 9 sudoku: O(1) (since maximum recursion depth is always 9)
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isSafe(vector<vector<char>>& board, int r, int c){         //O(n) = O(n) + O(n) + O(1)
        int n = board.size();
        char dig = board[r][c];
        //horizontal check
        for(int j = 0; j < n && j != c; j++){
            if(board[r][j] == dig){
                return false;
            }
        }
        //verticle check
        for(int i = 0; i < n && i != r; i++){
            if(board[i][c] == dig){
                return false;
            }
        }
        //grid check
        int sr = (r/3)*3;
        int sc = (c/3)*3;
        for(int i = sr; i <= sr+2; i++){
            for(int j = sc; j <= sc+2; j++){
                if(i != r && j != c){
                    if(board[i][j] == dig){
                        return false;
                    }
                }
            }
        }
        return true;
    }
    bool checkRow(vector<vector<char>>& board, int r){      // O(n^3)
        if(r > 8){
            return true;
        }
        int n = board.size();
        for(int j = 0; j < n; j++){
            if(board[r][j] != '.'){
                if(!isSafe(board, r, j)){
                   return false;
                }
                
            }
        }
        return checkRow(board, r+1);
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        return checkRow(board, 0);
    }
};

int main(){
    Solution s;
    vector<vector<char>> board = 
    {{'5','3','.','.','7','.','.','.','.'},
    {'6','.','.','1','9','5','.','.','.'},
    {'.','9','8','.','.','.','.','6','.'},
    {'8','.','.','.','6','.','.','.','3'},
    {'4','.','.','8','.','3','.','.','1'},
    {'7','.','.','.','2','.','.','.','6'},
    {'.','6','.','.','.','.','2','8','.'},
    {'.','.','.','4','1','9','.','.','5'},
    {'.','.','.','.','8','.','.','7','9'}};
    cout << s.isValidSudoku(board) << endl;
    return 0;
}