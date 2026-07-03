#include <iostream>
using namespace std;

int diaSum(int matrix[][3], int n){         // O(n)  and here cols of matrix required as c++ rules
    int diaSum = 0;
    for(int i = 0; i < n; i++){
        diaSum += matrix[i][i];
        if(i != n-i-1){                     // to remove common element
        diaSum += matrix[i][n-i-1];
        }
    }
    return diaSum;
}

int main(){
    int matrix[3][3] = {{1,2,3}, {5,6,7}, {9,10, 11}};
    int n = 3;
    
    cout << "Diagonal sum = " << diaSum(matrix, n) << endl;
    return 0;
}