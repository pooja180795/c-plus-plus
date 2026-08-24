/*
Function Overriding:
Parent and child both contain same function with different implementation.
The parent class function is said to be overridden

Virtual function
->  virtual function call at runtime
->  we define it with keyword "virtual" in a base class and always declared in base class and we override it in child class
->  it is dynamic in nature
*/

#include <iostream>
using namespace std;

class person{
public:
    string name;
    int age;
    void getInfo(){
        cout << this->name << endl;
        cout << this->age << endl;
    }
};

class student : public person{
public:
    int rollno;
    void getInfo(){
        cout << this->name << endl;
        cout << this->age << endl;
        cout << rollno << endl;
    }
};

int main(){
    student s1;
    s1.name = "priya";
    s1.rollno = 12;
    s1.age = 26;
    s1.getInfo();           // student getinfo
    s1.person::getInfo();   // person getinfo
    return 0;
}