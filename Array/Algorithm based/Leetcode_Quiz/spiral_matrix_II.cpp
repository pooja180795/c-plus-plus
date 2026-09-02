/*
Given a positive integer n, generate an n x n matrix filled with elements from 1 to n^2 in spiral order.
Example 1:

Input: n = 3
Output: [[1,2,3],[8,9,4],[7,6,5]]

Example 2:

Input: n = 1
Output: [[1]]

*/

#include <iostream>
#include <vector>
using namespace std; 

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int sr = 0, sc = 0;
        int er = n-1, ec = n-1;

        vector<vector<int>> ans(n, vector<int>(n, 0));
        int c = 1;
        while(sr <= er){                // O(n^2)
            if(sr == er){
                for(int j = sc; j <= ec; j++){
                    ans[sr][j] = c;
                    c++;
                }
                return ans;
            }

            for(int j = sc; j <= ec; j++){
                ans[sr][j] = c;
                c++;
            }
            for(int i = sr+1; i <= er; i++){
                ans[i][ec] = c;
                c++;
            }
            for(int j = ec-1; j >= sc; j--){
                ans[er][j] = c;
                c++;
            }
            for(int i = er-1; i > sr; i--){
                ans[i][sc] = c;
                c++;
            }
            sr++;ec--;er--;sc++;
        }
        return ans;
    }
};

int main(){
    Solution s;
    int n = 3;
    vector<vector<int>> ans = s.generateMatrix(n);


    for(vector<int> vec : ans){
        for(int val : vec){
            cout << val << " ";
        }
        cout << endl;
    }
}