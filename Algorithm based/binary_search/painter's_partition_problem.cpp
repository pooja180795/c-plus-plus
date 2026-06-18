/*
-   given are total boards and arr[i] represents total units in ith board. and there are total painters given. 
    each painter takes 1 unit of time to paint 1 unit of a board.
-   The task is to find the minimum time to paint all the boards under the constraint that any painter can paint
    continuous sections of boards.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    bool isPossible(vector<int>& arr, int totBoards, int minAllowedTime, int totPainters){           //O(n)
        int reqPainter = 1, currTime = 0;
        for(int i = 0; i < totBoards; i++){ 
            if(currTime + arr[i] <= minAllowedTime){
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

    int findMinTime(vector<int>& arr, int totBoards, int totPainters){      //O(n*log(N))
        int totUnits = 0, max = INT8_MIN;
        int ans = -1;
        for(int val : arr){    //O(n)
            totUnits += val;
            if(val > max){
                max = val;
            }
        }
        int st = max, end = totUnits;
        while(st <= end){                  //O(lon(N))
            int mid = st + (end-st)/2;
            if(isPossible(arr, totBoards, mid, totPainters )){          // O(n)
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