#include <iostream>
using namespace std;

class Shape{                                        // abstract class
public:
    virtual void draw() = 0;                        // Pure virtual function
    virtual float area() = 0;                       // Pure virtual function
};

class Rectangle : public Shape{
    public:
    int length, height;
    Rectangle(int l, int h)
    {
        length = l;
        height = h;
    }
    void draw(){
        cout << "Draw a rectangle....";
    }
    float area(){
        return length * height;
    }   
};

class Circle : public Shape{
    public:
    float radius;
    Circle(float r){
        radius = r; 
    }
    void draw(){
        cout << "Draw a Circle....";
    }
    float area(){
        float pi = 3.14;
        return pi * radius* radius;
    }   
};

int main(){
    Shape* s[3];                                        // Parent pointer array
    s[0] = new Rectangle(5, 6);
    s[1] = new Circle(3);
    s[2] = new Rectangle(50, 60);  
    float area; 

    for(int i = 0; i < 3; i++){
        s[i]->draw();
        cout << "araa = " << s[i]->area() << endl;
    }
    return 0;
}