#include <iostream>
using namespace std;

int main(){
    string str = "akcbdaabb", part = "ab";
    int st = str.find(part);
    int end = part.length();
    
    while(str.length() > 0 && st <= str.length())        
    {   
        str.erase(st, end);
        st = str.find(part);
        end = part.length();
    }
    
    cout << str << endl;
    return 0;
}