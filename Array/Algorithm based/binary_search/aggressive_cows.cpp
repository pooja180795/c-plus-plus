/*
Problem: Assign c cows to n stands such that min distance between them is largest possible
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
public:
    bool isPossible(vector<int> arr, int minAllowedDist, int totCows, int totSatnds){    //O(n)
        int currCow = 1, lastPos = arr[0];
        for(int i = 1; i < totSatnds; i++){        
            if(arr[i] - lastPos >= minAllowedDist){
                currCow++;
                lastPos = arr[i];
            }
            if(currCow == totCows){
                return true;
            }
        }
        
        return false;
    }
    int maxShortDistance(vector<int>& arr, int n, int c){     //max(O(n log(n)), n log(Range))
        sort(arr.begin(), arr.end());          //O(n log(n))
        int st = 1;           //min distance possible
        int end = arr[n-1] - arr[0];   //max distance possible
        int ans = -1;
        while(st <= end){                          //n log(Range)
            int mid = st + (end-st) / 2;
            if(isPossible(arr, mid, c, n)){               // if curr is possible then look right for large than this if possible
                ans = mid;
                st = mid + 1;
            }
            else{
                end = mid - 1;              // if curr is not possible than all right wont be possible so discard it and look its left
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> arr = {2,4,9,8,1};
    int n = 5;
    int c = 3;
    cout << s.maxShortDistance(arr, n, c) << endl;
    return 0;
}