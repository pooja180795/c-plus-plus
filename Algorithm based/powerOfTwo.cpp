#include <iostream>
using namespace std;

bool check(int n)
{
    return (n > 0) && (n & n-1) == 0;
}

int main(){
    int n = 256;

    cout << check(n);
    return 0;
}