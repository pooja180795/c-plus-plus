#include <iostream>
#include<cstring>
#include <algorithm>
using namespace std;

int main(){
    int a = 5;
    string b = "";
    b.append("a");
    b.append("b");

    reverse(b.begin(), b.end());
    cout << b  << endl;
    return 0;
}