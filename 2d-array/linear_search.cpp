#include <iostream>
using namespace std;

pair<int, int> linearSearch(int matrix[][3], int rows, int cols, int target){
    for(int i = 0; i < rows; i++){      // O(rows*cols)
        for(int j = 0; j < cols; j++){
            if(matrix[i][j] == target){
                return {i,j};
            }
        }
    }
    return {-1, -1};
}


int main(){
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};       // 2D-array
    int rows = 3, cols = 3;
    int target = 2;
    pair<int, int> ans = linearSearch(matrix, rows, cols, target);
    cout << ans.first << ", " << ans.second << endl;
    return 0;
}