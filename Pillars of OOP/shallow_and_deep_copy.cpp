/*
A shallow copy of an object copies all of the member values from one object to another.
compiler always make shallow copy. If we want to make deep copy. thne we need to make our custom constructor

A deep copy on the other hand, not only copies the member value but also make copies of any dynamically allocated
memory that the member points to.
*/
#include <iostream>
using namespace std;

class Student{
    public:
        string name;
        double* cgpaPtr;
        
        Student(string name, double cgpa){
            this->name = name;
            cgpaPtr = new double;
            *cgpaPtr = cgpa;
        }

        Student(Student& obj){
            this->name = obj.name;
            cgpaPtr = new double;               // deep copy
            *cgpaPtr = *obj.cgpaPtr;
        }

        void getInfo(){
            cout << this->name << endl;
            cout << *cgpaPtr << endl;
        }
};

int main(){
    Student s1("pooja", 7.28);
    Student s2(s1);             // this creates shallow copy
    *(s2.cgpaPtr) = 9.2;
    s1.getInfo();
    s2.name = "neha";
    s2.getInfo();
    
    return 0;
}