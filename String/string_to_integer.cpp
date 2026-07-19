class Solution {
public:
    int myAtoi(string s) {
        int start = 0;
        int sign = 1;
        int number = 0;
        int power = 10;

        while(s[start] == ' '){
            start++;
        }
        
        if(s[start] == '-'){
            sign = -sign;
        }

        while(s[start] == '0'){
            start++;
        }

        for(int i = start; i < s.length(); i++){
            if(s[i] > '0' && s[i] <= '9'){
                number = number * power +  s[i];
            }
        }
        return sign * number;
    }
};