#include <iostream>
#include <cstring>
using namespace std;

//like we  step ahead and use vector instead array same we use string instead of char array
int main(){
    // char str[] = {'h','i','\0'};   // null character will be ignored
    // //str = {'d'};  //error
    // char str1[10];
    // //char str2[] = {'q','w','e','r','t','d'};            // not valid because it can give wrong size without \0 at last
    // char str2[] = {'q','w','e','r','t','d','\0'};       // valid

    // cout << strlen(str2) << endl;
    // // cout << "enter char array: ";           // hello pooja
    // // cin >> str1;
    
    // // cout << str1 << endl;                   // hello

    // cout << "enter char array: ";
    
    // //cin.getline(str2, 10,'@');              // upto delimiter
    // cin.getline(str2,6);
    // cout << strlen(str2) << endl;             
    // cout << str2 << endl;                    // count and place null character at the end

    string str = "hi hello!";
    cout << str << endl;

    cout << "enter string: ";
    //cin >> str;
    //cout << str << endl;                // just print untill space

    getline(cin, str);                     // to get whole string
    cout << str << endl; 

    return 0;
}
