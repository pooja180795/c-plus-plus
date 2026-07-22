/*
Implement the myAtoi(string s) function, which converts a string to a 32-bit signed integer.

The algorithm for myAtoi(string s) is as follows:

    Whitespace: Ignore any leading whitespace (" ").
    Signedness: Determine the sign by checking if the next character is '-' or '+', assuming positivity if neither present.
    Conversion: Read the integer by skipping leading zeros until a non-digit character is encountered or the end of the string is reached. If no digits were read, then the result is 0.
    Rounding: If the integer is out of the 32-bit signed integer range [-231, 231 - 1], then round the integer to remain in the range. Specifically, integers less than -231 should be rounded to -231, and integers greater than 231 - 1 should be rounded to 231 - 1.

Return the integer as the final result.
*/

#include <iostream>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {              // O(n)
        int n = s.length();
        int start = 0;
        int sign = 1;
        int number = 0;
        
        while(start < n && s[start] == ' '){
            start++;
        }
        
        if(start < n && s[start] == '-'){
            sign = -sign;
            start++;
        }

        else if(start < n && s[start] == '+'){
            start++;
        }

        while(start < n && s[start] == '0'){
            start++;
        }

        for(int i = start; i < s.length(); i++){
            int digit = s[i] - '0';
            if(s[i] > '0' && s[i] <= '9'){
                if(s[i] > INT32_MAX || (s[i] == INT32_MAX && digit > (sign == 1 ? 7 : 8))){
                    return sign == 1 ? INT32_MAX : INT32_MIN;
                }
                else{
                    number = number * 10 + digit;
                }
            }
            else{
                return sign*number;
            }
        }
        return sign * number;
    }
};

int main(){
    Solution s1;
    string s = "    -00123";
    cout << s1.myAtoi(s) << endl;
    return 0;
}