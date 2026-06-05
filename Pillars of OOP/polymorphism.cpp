#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void move() {  // virtual!
        cout << "vehicle moving" << endl;
    }
};

class Car : public Vehicle {
protected:
    string brand;
    int speed;
    string color;
    int no_of_doors;
public:
    Car(string b, int s, string c, int d) {
        brand = b;
        speed = s;
        color = c;
        no_of_doors = d;
    }
    void move() {
        cout << "car moving" << endl;
    }
};

class Bike : public Vehicle {
protected:
    string brand;
    int speed;
    string type;
public:
    Bike(string b, int s, string t) {
        brand = b;
        speed = s;
        type = t;
    }
    void move() {
        cout << "bike moving" << endl;
    }
};

int main() {
    Vehicle* vehicles[3];
    vehicles[0] = new Car("Toyota", 150, "grey", 4);
    vehicles[1] = new Bike("Honda", 80, "sports");
    vehicles[2] = new Car("BMW", 200, "black", 2);

    for(int i = 0; i < 3; i++) {
        vehicles[i]->move();  // calls correct move() for each!
    }

    // clean up
    for(int i = 0; i < 3; i++) {
        delete vehicles[i];
    }
    return 0;
}