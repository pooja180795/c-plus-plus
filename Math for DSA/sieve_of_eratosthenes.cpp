/*
Given an integer n, return the number of prime numbers that are strictly less than n.
-   0 and 1 are not prime numbers
*/

#include <iostream>
#include <vector>
using namespace std;

int countPrime(int n){
    vector<bool> isPrime(n, true);
    int count = 0;
    for(int i = 2; i < n ; i++){
        if(isPrime[i]){
            count++;
        }
        for(int j = i * 2; j < n; j = j + i){
            isPrime[j] = false;
        }
    }
    return count;
}

int main(){
    int n = 10;
    
    cout << countPrime(n) << endl;

    return 0;
}