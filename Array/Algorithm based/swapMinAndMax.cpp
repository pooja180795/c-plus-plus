// WAF to swap max and min number of an array

#include <iostream>
#include <climits>
using namespace std;

void swap(int arr[], int size)
{
    int max = INT_MIN;
    int min = INT_MAX;
    int min_index, max_index;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] < min)
        {
            min_index = i;
            min = arr[i];
        }

        if(arr[i] > max)
        {
            max_index = i;
            max = arr[i];
        }
        
    }

    swap(arr[min_index], arr[max_index]);

}

int main()
{
    int arr[] = {1,2,9,-1,50,8,89};
    int size = sizeof(arr) / sizeof(int);
    swap(arr, size);

    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}