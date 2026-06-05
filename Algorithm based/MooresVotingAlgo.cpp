// Majority element (MJ > n/2) else return -1.

#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    int freq = 0;
    int majEle;
    int majorityEle(vector<int> arr){
        for(int val : arr)
        {
            if(freq == 0){
                majEle = val;
            }
            if(val == majEle){
                freq++;
            }
            else{
                freq--;
            }
        }

        int count = 0;
        for(int val : arr){
            if(val == majEle){
                count++;
            }
        }
        if(count > arr.size()/2){
            return majEle;
        } 
        else{
            return -1;
        }
    }
};

int main(){
    Solution s;
    vector<int> arr = {1,2,2,3,2,4,2,5,2,2,6,2};
    int ans = s.majorityEle(arr);
    cout << ans << endl;
    return 0;
}