#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b){
    return a + b;
}

template <typename T>
T sub(T a, T b){
    return a - b;
}

template <typename T>
void printArr(T arr, int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }    
}

int main(){
    cout << sub(1,2) << endl;
    cout << add(1.7,2.0) << endl;
    cout << add('a', '\0') << endl;

    int arr1[]= {1,2,3,4};
    string arr2[] = {"pooja", "pranav", "abhi"};

    printArr(arr1, 4);
    printArr(arr2, 3);

    return 0;
}