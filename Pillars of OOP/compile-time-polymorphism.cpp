// constructor-overloading

// #include <iostream>
// using namespace std;

// class Print{
// public:
//     string name;
//     Print(){
//         cout << "non-parameterized\n";
//     }
//     Print(string name){
//         this->name = name;
//         cout << "parameterized\n";
//     }
// };

// int main(){
//     Print p1("pooja");
//     return 0;
// }

// function-overloading

#include <iostream>
using namespace std;

class Print{
public:
    string name;
    void print(int a){
        cout << a << endl;
    }
    void print(char ch){
        cout << ch << endl;
    }
};

int main(){
    Print p1;
    p1.print('w');
    return 0;
}