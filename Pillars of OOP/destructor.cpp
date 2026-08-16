/*
we need to free dynamically allocated memory(heap memory). static memory free automatically.
*/

#include <iostream>
using namespace std;

class School{
public:
    string name;
    int* rankPtr;

    School(string name, int rank){
        this->name = name;
        rankPtr = new int;
        *rankPtr = rank;
    }
    void getInfo(){
        cout << this->name << endl;
        cout << *rankPtr << endl;
    }
    ~School(){
        cout << "hi, I am a destructor. I delete everything" << endl;
        delete rankPtr;
    }
};

int main(){
    School s1("patel sankul", 1);
    s1.getInfo();
    return 0;
}