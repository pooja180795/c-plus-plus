// Write a program to print all the unique values in an array.

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {5, 4, 3, 2, 1, 3, 5,1,2,49,8,7};
    vector<int> uniqueVec;
    int j = 0;
    unordered_map<int , int> freq;

    for(int val : arr)
    {
        freq[val]++;
    }

    for(const auto& [key, value] : freq)
    {
        if(freq[key] < 2)
        {
            uniqueVec.push_back(key);           
        }
    }

    for(int i = 0; i < uniqueVec.size(); i++)
    {
        cout << uniqueVec[i] << " ";
    }
    
    return 0;
}