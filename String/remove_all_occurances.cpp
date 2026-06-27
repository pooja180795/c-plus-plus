#include <iostream>
using namespace std;

int main(){
    string str = "abcbdaabb", part = "k";
    int st = str.find(part);
    int end = part.length();
    cout << st << endl;
    while(str.length() > 0 && st <= str.length())        
    {   cout << "hi";
        str.erase(st, end);
        cout << str << endl;
        st = str.find(part);
        end = part.length();
    }
    
    cout << str << endl;
    return 0;
}