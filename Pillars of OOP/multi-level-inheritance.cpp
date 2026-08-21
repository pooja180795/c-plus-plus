#include <iostream>
using namespace std;

class person{
public:
    string name;
    int age;
};

class student : public person{
public:
    int rollno;
};

class GradStudent : public student{
public:
    string researchArea;
};

int main(){
    GradStudent s1;
    s1.name = "Pooja Chothani";
    s1.researchArea = "RL";

    cout << s1.name << endl;
    cout << s1.researchArea  << endl;
    
    return 0;
}