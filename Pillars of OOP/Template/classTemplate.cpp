#include <iostream>
using namespace std;

template <typename T>

class Tem{
    private:
        T number;
    public:
        Tem(T n){
            number = n;
        }
        void show(){
            cout << number << endl;
        }
};

int main(){
    Tem<int> t1(1);
    Tem<float> t2(20.20);
    Tem<string> t3("sdfsdf");
    t1.show();
    t2.show();
    t3.show();
    return 0;
}