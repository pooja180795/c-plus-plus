#include <iostream>
using namespace std;

class Student{
public:
    int rollno;
    string name;
};

class Teacher{
public:
    string subject;
    double salary;
};

class TA: public Student, public Teacher{

};

int main(){
    TA t1;
    t1.name = "Pooja";
    t1.subject = "DSA";

    cout << t1.name << endl;
    cout << t1.subject << endl;
    return 0;
}