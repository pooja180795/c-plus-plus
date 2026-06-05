#include <iostream>
using namespace std;

class person{
protected:
    string name;
    int age;
public:
    person(string n, int a)
    {
        name = n;
        age = a;
    }

    void introduce()
    {
        cout << "person's name = " << name << endl;
        cout << "person's age = " << age << endl;
    }
};

class employee : public person{
protected:
    string company;
    int salary;
public:

    employee(string n, int a, string c, int s) : person(n, a)
    {
        company = c;
        salary = s;
    }

    void work()
    {
        cout << name << " is working at " << company << endl;
    }
};

class manager : public employee{
protected:
    string department;
    int teamSize;
public:

    manager(string n, int a, string c, int s, string d, int ts) : employee(n, a, c, s)
    {
        department = d;
        teamSize = ts;
    }

    void manage()
    {
        introduce();
        work();
        cout << name << " manages " << teamSize << " people in the " << department << " department" << endl;
    }
};

int main()
{
    manager m1("prashant", 33, "Toyota", 50000, "sales", 40);
    m1.manage();
    return 0;
}
