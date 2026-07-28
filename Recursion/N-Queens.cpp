
/*
The n-queens puzzle is the problem of placing n queens on an n x n chessboard such that no two queens attack each other.

Given an integer n, return all distinct solutions to the n-queens puzzle. You may return the answer in any order.

Each solution contains a distinct board configuration of the n-queens' placement, where 'Q' and '.' both indicate a queen and an empty space, respectively.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isSafe(vector<string>& board, int row, int col, int n){        
        // verticle check
        for(int r = 0; r < row; r++){               //O(n)
            if(board[r][col] == 'Q'){
                return false;
            }
        }
        //upper left diagonal
        for(int r = row-1, c = col-1; r >= 0 && c >= 0; r--, c--){          
            if(board[r][c] == 'Q'){
                return false;
            }
        }
        //upper right diagonal
        for(int r = row-1, c = col+1; r >= 0 && c < n; r--, c++){           
            if(board[r][c] == 'Q'){
                return false;
            }
        }
        return true;
    }
    void placeInRow(vector<string>& board, int row, int n, vector<vector<string>>& ans){
        if(row == n){
            //base case
            ans.push_back({board});
            return;

        }
        for(int j = 0; j < n; j++){                     
            if(isSafe(board, row, j, n)){
                board[row][j] = 'Q';
                placeInRow(board, row+1, n, ans);
                board[row][j] = '.';
            }

        }
    }

    vector<vector<string>> solveNQueens(int n) {        // O(n!)
        vector<string> board(n, string(n,'.'));
        vector<vector<string>> ans;
        
        placeInRow(board, 0, n, ans);
        return ans;
    }
};


int main(){
    Solution s;
    int n = 4;
    vector<vector<string>> ans = s.solveNQueens(n);

    for(vector<string> vec : ans){
        for(string st : vec){
            cout << st << " ";
        }
        cout << endl;
    }
    return 0;
}