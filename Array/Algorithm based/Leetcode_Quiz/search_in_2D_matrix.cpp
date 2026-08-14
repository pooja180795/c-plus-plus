class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int totRow = matrix.size();
        int totCol = matrix[0].size();

        for(int i = 0; i < totRow; i++){
            if(target >= matrix[i][0] && target <= matrix[i][totCol-1]){
                int st = 0; int end = totCol-1;
                while(st <= end){
                    int mid = st + (end-st)/2;
                    if(matrix[i][mid] == target){ return true; }
                    else if(matrix[i][mid] < target){
                        st = mid+1;
                    }
                    else{
                        end = mid-1;
                    }
                }
            }
        }
        return false;
    }
};