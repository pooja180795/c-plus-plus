#include <iostream>
using namespace std;

int reverseN(int n){
    int power = 10;
    int newN = 0;
    while(n > 0){
        int dig = n % 10;
        if(newN > INT32_MAX/10 || newN < INT32_MIN/ 10){
            return 0;
        }
        newN = (newN * power) + dig;
        n /= 10;
    }
    return newN;
}

bool checkPalindrome(int origN){
    if(origN < 0){ return false; }
    int revN = reverseN(origN);
    if(origN == revN){
        cout << origN <<" is a Palindrome number" << endl;
        return true;
    }
    else{
        cout << origN <<" is not a Palindrome number" << endl;
        return false;
    }
}

int main(){
    int n = 515;
    cout << "reverse of " << n << " = " << reverseN(n) << endl;

    cout << checkPalindrome(n) << endl;
    return 0;
}