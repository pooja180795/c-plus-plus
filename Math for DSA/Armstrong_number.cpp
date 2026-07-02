/*
The number is an Armstrong number if sum of cubes of its digits is = actual number
- ex: 153 = 1 + 125 + 27
*/

#include <iostream>
using namespace std;

bool isArmstrong(int n){                    // O(logn)
    int copyN = n;
    int sumOfCubes = 0;
    while(n > 0){
        int digit = n % 10;
        sumOfCubes += digit * digit * digit;
        n /= 10;
    }
    if(sumOfCubes == copyN){
        return true;
    }
    return false;
}

int main(){
    int n = 153;
    if(isArmstrong(n)){
        cout << n << " is an armstrong number" << endl;
    }
    else{
        cout << n << " is not an armstrong number" << endl;
    }
    return 0;
}