// GCD = Greatest Common Divisor or HCF = Highest Common Factor
// LCM = Least Common Multiple

#include <iostream>
using namespace std;

int findGCD(int m, int n){
    while(m > 0 && n > 0){
        if(m > n){
            m = m % n;
        }
        else{
            n = n % m;
        }
    }
    if(m == 0) { return n; }
    return m;
}

int gcdRecursion(int m, int n){          // using Recursion
    if(n == 0) { return m; }
    gcdRecursion(n, m % n);
}

int lcm(int m, int n){
    int gcd = gcdRecursion(m, n);
    int lcm = (m*n) / gcd;
    return lcm;
}

int main(){
    int m = 20, n = 28;
    
    cout << "GCD = " << findGCD(m, n) << endl;
    cout << "GCD = " << gcdRecursion(m,n) << endl;

    cout << "LCM = " << lcm(m,n) << endl;
    return 0;
}