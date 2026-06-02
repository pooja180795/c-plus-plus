#include <iostream>
using namespace std;

int reverseNumber(int n)
{
    int power = 10;
    int output = 0;
    while(n > 0)
    {
        int rem = n % 10;
        output = output * power + rem;
        n = n / 10;
        //power  = power * 10;
    }
    return output;
   
}

void arrmethod(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        arr[i] = arr[i] * 2;
    }
}

int main()
{
    int n = 23457;
    cout << reverseNumber(n) << endl;
    
    int arr[] = {1,2,3,4,5};
    int size = 5;
    arrmethod(arr, size);

     for(int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}