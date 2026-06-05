#include <iostream>
using namespace std;

class Car{
protected:
    string brand;
    int speed;
public:

    Car(string b, int s)
    {
        brand = b;
        speed = s;
    }

    void can()
    {
        cout << "brand= " << brand << endl;
        cout << "speed= " << speed << endl;
        cout << "it can drive" << endl;
    }
};

class Airplane{
protected:
    float altitude;
public:

    Airplane(float a)
    {
        altitude = a;
    }

    void can()
    {
        cout << "altitude= " << altitude << endl;
        cout << "it can fly" << endl;
    }
};

class FlyingCar : public Car, public Airplane{
public:
    FlyingCar(string b, int s, float a) : Airplane(a), Car(b, s)
    {

    }
};

int main()
{
    FlyingCar f1("boing", 600, 456.90);
    f1.Airplane :: can();
    f1.Car :: can();
    return 0;
}