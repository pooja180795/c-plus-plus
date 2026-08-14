/*
    Constructor is a special method invoked automatically at time of object creation. used for initialization
    Properties:
    ->  Same name as class
    ->  Constructor doesn't have return type
    ->  only called once(automatically), at object creation
    ->  memory allocation happens when constructor is called
*/

#include <iostream>
using namespace std;

class Car{
public:
    string name;
    string model;
    double price;

    Car(){
        cout << "This is the non-parameterized constructor" << endl;
    }

    Car(string n, string m, double p){
        cout << "This is the parameterized constructor" << endl;
        name = n;
        model = m;
        price = p;
    }

    Car(Car &oriObj){
        cout << "This is the custom-copy-constructor" << endl;
        this->name = oriObj.name;
        this->model = oriObj.model;
        this->price = oriObj.price;
    }
    void getInfo(){
        cout << name << endl;
        cout << price << endl;
    }
};

int main(){
    Car c1("Camry", "sedan", 26000);
    //c1.getInfo();
    //Car c2(c1);         // copy-constructor
    Car c2(c1);
    c2.getInfo(); 
    return 0;
}