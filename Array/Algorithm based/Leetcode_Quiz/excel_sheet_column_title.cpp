/*
Given an integer columnNumber, return its corresponding column title as it appears in an Excel sheet.
For example:

A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28 
...

 

Example 1:

Input: columnNumber = 1
Output: "A"

Example 2:

Input: columnNumber = 28
Output: "AB"

Example 3:

Input: columnNumber = 701
Output: "ZY"

*/

#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {       // tc = O(logn)
        string ans= "";
        
        
            while(columnNumber > 0){
                columnNumber--;
                int rem = columnNumber % 26;
                
                ans += rem + 'A';
            
                columnNumber /= 26;
            }
            
            reverse(ans.begin(), ans.end());
            return ans;
    
        return ans;
    }
};

int main(){
    Solution s1;
    cout << s1.convertToTitle(74) << endl;
    return 0;
}