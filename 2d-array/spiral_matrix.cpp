#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix){
    int m = matrix.size();
    int n = matrix[0].size();
    int sRow = 0, eRow = m-1;
    int sCol = 0, eCol = n-1;

    vector<int> ans;

    while(sRow <= eRow && sCol <= eCol){                //O(m*n)
        if(sRow == eRow){
            for(int j = sCol; j <= eCol; j++){
                ans.push_back(matrix[sRow][j]);
            }
            return ans;
        }
        if(sCol == eCol){
            for(int i = sRow; i <= eRow; i++){
                ans.push_back(matrix[i][sCol]);
            }
            return ans;
        }
        // top
        for(int j = sCol; j <= eCol; j++){ 
            ans.push_back(matrix[sRow][j]);
        }
        //   right
        for(int i = sRow + 1; i <= eRow; i++){
            ans.push_back(matrix[i][eCol]);
        }
        // bottom
        for(int j = eCol - 1; j >= sCol; j--){
            if(sCol == eCol){ break; }
            ans.push_back(matrix[eRow][j]);
        }
        // left
        for(int i = eRow - 1; i > sRow; i--){
            if(sRow == eRow){ break; }
            ans.push_back(matrix[i][sCol]);
        }
        sRow++; eRow--; sCol++; eCol--;
        
        
    }
    
    return ans;
}

int main(){
    vector<vector<int>> matrix = {{1,2,3,4,5},{1,2,3,4,6},{1,2,3,4,3}};
    vector<int> ans = spiralOrder(matrix);
    for(int val : ans){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}