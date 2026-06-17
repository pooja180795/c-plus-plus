/*

*/

#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    bool isValid(vector<int>& arr, int totBoards, int minTime, int totPainters){
        int reqPainter = 1, currTime = 0;
        for(int i = 0; i < totBoards; i++){
            if(currTime + arr[i] <= minTime){
                currTime += arr[i];
            }
            else{
                reqPainter++;
                currTime = arr[i];
            }
        }
        if(reqPainter > totPainters){
            return false;
        }
        return true;
    }

    int findMinTime(vector<int>& arr, int totBoards, int totPainters){
        int totUnits = 0, max = INT8_MIN;
        int ans = -1;
        for(int val : arr){
            totUnits += val;
            if(val > max){
                max = val;
            }
        }
        int st = max, end = totUnits;
        while(st <= end){
            int mid = st + (end-st)/2;
            if(isValid(arr, totBoards, mid, totPainters )){
                ans = mid;
                end = mid - 1;
            }
            else{
                st = mid + 1;
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> arr = {40,30,10,20};
    int totBoards = 4;
    int totPainters = 2;
    cout << s.findMinTime(arr, totBoards, totPainters) << endl;
    return 0;
}