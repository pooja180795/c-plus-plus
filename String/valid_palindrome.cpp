#include <iostream>
using namespace std;

void isPalindrom(string str){
    int st = 0;
    int end  = str.length() - 1;
    while(st < end){
        if(str[st++] != str[end--]){
            cout << str << "  not a palindrom" << endl;
            return;
        }
    }
    cout << str << " is a palindrom" << endl;
}

int main(){
    string str = "madam";
    isPalindrom(str);
    return 0;
}