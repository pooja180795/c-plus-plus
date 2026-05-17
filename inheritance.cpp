/* Inheritance is a mechanism where one class (child/subclass) acquires the properties and 
behaviors of another class (parent/superclass). */

#include <iostream>
using namespace std;

class Vehicle{
protected:
    string brand;
    int speed;    
    string color;

    Vehicle(string b, int s, string c){
            brand = b;
            speed = s;
            color = c;
        }
public:
    void move(){                           
        cout << "vehicle is moving" << endl;
    }

    void stop(){
        cout << "vehicle is stopped" << endl;
    }
};

class Car : public Vehicle{
    public:
        int no_of_doors;

        Car(string b, int s, string c, int d) : Vehicle(b, s, c){
            no_of_doors = d;
        }

        void move(){                           
        cout << "car is moving" << endl;         //method overriding
    }

        void display(){
        cout << brand << endl;
        cout << no_of_doors << endl;
        }

        void openTrunk(){
            cout << "car trunk is open" << endl;
        }
};

class Bike : public Vehicle{
    public:
        string type;

        Bike(string b, int s, string c, string t) : Vehicle(b, s, c){
            type = t;
        }

        void stop(){  
        Vehicle :: stop();                           // explicitly call Vehicle's move!
        cout << "bike is stopped specifically" << endl;
    }

        void wheelie(){
            cout << "bike is wheeling..." << endl;
        }
};

int main(){
    Car c1("Toyota", 150, "grey", 4);
    c1.move();
    c1.display();
    // cout << c1.brand << endl;   //gives error because brand is protected
    
    Bike b1("Honda", 80, "red", "sports");
    b1.stop();


    return 0;
}