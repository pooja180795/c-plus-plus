/* Problem: Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

Constraints:

    -100.0 < x < 100.0
    -231 <= n <= 231-1
    -n is an integer.
    -Either x is not zero or n > 0.
    -104 <= xn <= 104 */

#include <iostream>
using namespace std;

class Solution{
public:
    double myPow(double x, int n){

        long binForm = n;
        double ans = 1;

        //base cases
        if(x == 0){ return 0.0; }
        if(x == 1){ return 1.0; }
        if(n == 0){ return 1.0; }
        if(n < 0){ x = 1/x; binForm = -binForm; }
        if(x == -1 && n % 2 == 0){ return 1.0; }
        if(x == -1 && n % 2 != 0){ return -1.0; }
 
        while(binForm > 0){
            if(binForm % 2 == 1){
                ans *= x;
            }
            x *= x;
            binForm /= 2;
        }
        return ans;
    }
};

int main(){
    double x = 5.0;
    int n = 2;
    Solution s;
    cout << s.myPow(x, n) << endl;
    return 0;
}
