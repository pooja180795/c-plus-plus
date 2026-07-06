#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> findMissingAndRepeatedValues(vector<vector<int>>& arr){     // O(n^2)
    int n = arr.size();
    unordered_set<int> m;
    vector<int> ans;
    int a, b;
    int actual_sum = 0;
    int expected_sum = (n*n * (n*n +1)) / 2;

    for(int i = 0; i < n; i++){                 
        for(int j = 0; j< n; j++){
            if((m.find(arr[i][j])) != m.end()){
                a = arr[i][j];
                ans.push_back(a);
            }
            m.insert(arr[i][j]);
            actual_sum += arr[i][j];
        }
    }

    //actual_sum = expected_sum + a - b
    b = expected_sum + a - actual_sum;
    ans.push_back(b);

    return ans;

}

int main(){
    vector<vector<int>> arr = {{9,1,7},{8,9,2},{3,4,6}};
    vector<int> ans = findMissingAndRepeatedValues(arr);

    for(int val : ans){
        cout << val << endl;
    }
    
    return 0;
}