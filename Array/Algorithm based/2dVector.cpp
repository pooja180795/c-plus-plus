#include <iostream>
#include <vector>
using namespace std;

int main(){
    int rows = 3, cols = 3, count = 1;
    vector<vector<int>> matrix(rows, vector<int>(cols,0));

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            matrix[i][j] = count;
            count++;
        }
    }

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}