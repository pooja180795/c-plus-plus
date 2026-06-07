/*      try    = "watch this code"
        throw  = "something went wrong, here's the error"
        catch  = "I'll handle that error"       */

#include <iostream>
using namespace std;

float division(int a, int b)
{
    if(b == 0){
        throw "division by zero!";
    }
    return a / b;
}

int main(){
    try{
        float ans = division(4, 0);
        cout << ans << endl;
    }

    catch(const char* error){
        cout << "Error : " << error << endl;
    }

    return 0;
}