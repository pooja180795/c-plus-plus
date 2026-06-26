#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
	void mergeArray(vector<int>& firstArr, vector<int> secondArr){
        int m = firstArr.size();
        int n = secondArr.size();
        int i = m-n-1;
        int j = n-1;
        int idx = m-1;
    

        while(i >= 0 && j >= 0){
            
            if(firstArr[i] >= secondArr[j]){
                firstArr[idx--] = firstArr[i--];
            }
            else if(secondArr[j] > firstArr[i]){
                firstArr[idx--] = secondArr[j--];
            }
        }
        
        while(j >=0){
            firstArr[idx--] = secondArr[j--];
        }
        
    }
    void printArr(vector<int>& firstArr){
        for(int val: firstArr){
            cout << val << " ";
        }
        cout << endl;
    }

};

int main(){
    Solution s;
    vector<int> firstArr = {5,5,6,0,0};
    vector<int> secondArr = {1,3};
    s.mergeArray(firstArr, secondArr);
    s.printArr(firstArr);
    return 0;
}