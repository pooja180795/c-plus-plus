#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<vector<int>> mat = {{1,2,3},{2,3,4,5,6},{2,3}};  // in vector resize is available unlike array
    for(int i = 0; i < mat.size(); i++){
        for(int j = 0; j < mat[i].size(); j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}