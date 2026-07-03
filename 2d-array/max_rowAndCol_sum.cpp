#include <iostream>
using namespace std;

int maxRowSum(int matrix[][3], int rows, int cols){
    int maxRowSum = INT16_MIN;
    for(int i = 0; i < rows; i++){
        int currRowSum = 0;
        for(int j = 0; j < cols; j++){
            currRowSum += matrix[i][j];
        }
        maxRowSum = max(currRowSum, maxRowSum);
    }
    return maxRowSum;
}

int maxColSum(int matrix[][3], int rows, int cols){
    int maxColSum = INT16_MIN;
    for(int i = 0; i <  cols; i++){
        int currColSum = 0;
        for(int j = 0; j < rows; j++){
            currColSum += matrix[j][i];
        }
        maxColSum = max(currColSum, maxColSum);
    }
    return maxColSum;
}

int main(){
    int matrix[3][3] = {{1,22,3},{4,5,6},{7,8,9}};       // 2D-array
    int rows = 3, cols = 3;
    cout << "max row sum = " << maxRowSum(matrix, rows, cols) << endl;
    cout << "max col sum = " << maxColSum(matrix, rows, cols) << endl;
    return 0;
}