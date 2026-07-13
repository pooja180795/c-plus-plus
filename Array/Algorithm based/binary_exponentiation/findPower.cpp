// we can't apply binary exponentiation here. so this program is here just for a remeinder
#include <iostream>
using namespace std;

bool findPower(int b, int ans){
    if(ans == 1) return true;   // b^0 = 1
    if(ans <= 0 || b <= 1) return false;    //guard against invalid input
    while(ans > 1){
        if(ans % b != 0){
            return false;
        }
        ans = ans / b;
    }
    return true;
}

int main(){   
    int b = -5;
    int ans = -25;
    cout << findPower(b, ans) << endl;
    return 0;
}
