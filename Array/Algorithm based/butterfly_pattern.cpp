#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n = 4;
    //top
    for(int i = 0; i < n; i++){                 // outer loop
        //top left *
        for(int j = 0; j <= i; j++){            // inner loop
            cout << "* ";
        }
        // center space
        for(int j = 0; j < 2 *(n-i-1); j++){
            cout << "  ";
        }
        // tp right *
        for(int j = 0; j < i+1; j++){
            cout << "* ";
        }
        cout << endl;
    }
    //bottom
    for(int i = 0; i < n; i++){
        // bottom left *
        for(int j = 0; j < n-i; j++){
            cout << "* ";
        }
        // bottom center sapce
        for(int j = 0; j < 2*i; j++){
            cout << "  ";
        }
        // bottom right *
        for(int j = 0; j < n-i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}