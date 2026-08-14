#include <iostream>
using namespace std;

class Teacher{
private:
    double salary;
public:
    int id;    
    string department;
    string subject;

    void setter(double s){
        salary = s;
    }

    double getter(){
        return salary;
    }
};

int main(){
    Teacher t1;
    // t1.salary = 10000;   this will give error
    t1.setter(12000);
    cout << "salary of t1 is: "<< t1.getter() << endl;
}