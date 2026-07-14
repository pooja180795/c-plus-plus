#include <iostream>
using namespace std;

int findFibo(int n){        // time-com = O(2^n), space-com = O(n)-> using call-stack
    if(n == 0 || n == 1) return n;              //base case
   
    return findFibo(n-1) + findFibo(n-2);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
}

int main(){
    int n = 7;
    cout << findFibo(n) << endl;
    return 0;
}