#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int n){
    //cout << "count = " << (int)(log10(n)+ 1) << endl;       // shortcut to count digits

    int count = 0;

    while(n > 0){           // O(logn(base 10))
        int digit = n % 10;
        cout << digit << " ";
        count++;
        n /= 10;
    }
    cout << endl;
    return count;
}

int main(){
    int n = 3452;
    
    cout << countDigits(n) << " digits" << endl;
    
    return 0;
}