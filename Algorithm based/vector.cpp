#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;

    cout << "vector size = " << vec.size() << endl;
    
    vec.push_back(12);
    vec.push_back(22);
    vec.push_back(32);

    cout << "after push back vector size = " << vec.size() << endl;

    vec.pop_back();

    cout << vec[0] << endl;
    cout << vec.at(1) << endl;

    for(int val : vec)   // for each
    {
        cout << val << endl;
    }

    cout << "size = " << vec.size() << endl;
    cout << "capacity = " << vec.capacity() << endl;

    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    cout << "size = " << vec.size() << endl;
    cout << "capacity = " << vec.capacity() << endl;

    return 0;
}