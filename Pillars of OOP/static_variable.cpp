/*
Static variables:
->  Variables declared as static in a function are created and initialised once in a lifetimeof the program

->  static → value can change, but the variable keeps its value between function calls.

*/

//In function
// #include <iostream>
// using namespace std;

// void fun(){
//     static int a = 0;
//     cout << "a = " << a << endl;
//     a++;
// }

// int main(){
//     fun();
//     fun();
//     fun();
//     return 0;
// }

// In class
#include <iostream>
using namespace std;

class person{
public:
    person(){
        cout << "constructor" << endl;
    }

    ~person(){
        cout << "destructor" << endl;
    }
};

int main(){
    if(true){
        person p1;          // normal object destroyed when scop ends
        static person p1;   // static destroyed when prgram ends
    }
    cout << "end of the program" << endl;
    return 0;
}