// tc = 8(n^2), sc = n^2

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isValid(vector<vector<int>>& grid, int r, int c, int n, int expVal){
        if(r < 0 || c < 0 || r >= n || c >= n || grid[r][c] != expVal){
            return false;
        }
        if(expVal == n*n -1){
            return true;
        }

        int m1 = isValid(grid, r-2, c+1, n, expVal+1);
        int m2 = isValid(grid, r-1, c+2, n, expVal+1);
        int m3 = isValid(grid, r+1, c+2, n, expVal+1);
        int m4 = isValid(grid, r+2, c+1, n, expVal+1);
        int m5 = isValid(grid, r+2, c-1, n, expVal+1);
        int m6 = isValid(grid, r+1, c-2, n, expVal+1);
        int m7 = isValid(grid, r-1, c-2, n, expVal+1);
        int m8 = isValid(grid, r-2, c-1, n, expVal+1);
        
        return m1 || m2 || m3 || m4 || m5 || m6 || m7 || m8;
    }
    bool checkValidGrid(vector<vector<int>>& grid) {
        int n = grid.size();
        return isValid(grid, 0, 0, n, 0);
    }
};

int main(){
    Solution s;
    vector<vector<int>> grid = {{0,11,16,5,20},{17,4,19,10,15},{12,1,8,21,6},{3,18,23,14,9},{24,13,2,7,22}};
    cout << s.checkValidGrid(grid) << endl;
    return 0;
}