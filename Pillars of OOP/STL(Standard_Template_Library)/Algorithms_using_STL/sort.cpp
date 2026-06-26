#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//custom comparator
bool comparator(pair<int, int> p1, pair<int, int> p2) 
    {
        if(p1.second < p2.second) { return true; }
        if(p1.second > p2.second) { return false; }
       
        if(p1.first < p2.first){ return true; }
        else return false;
    }

int main(){
    //------------------------------SORT-------------------------------------------
    // int arr[] = {11,22,3};
    // sort(arr, arr+3);                     //[0,n)


    // for(int val : arr){
    //     cout << val << " ";
    // }
    // vector<int> vec = {4,33,2,28};
    // sort(vec.begin(), vec.end());              //[0,n)

    // for(int val : vec){
    //     cout << val << " ";
    // }

    //comparator
    //by default comparision works in sort function is in ascending order
    //now for decnding we need to do as below
    // vector<int> vec2 = {4,33,2,28};
    // sort(vec2.begin(), vec2.end(), greater<int>());

    // for(int val : vec2){
    //     cout << val << " ";
    // }

    //for pair
    // vector<pair<int, int>> vec3 = {{4,2}, {1,3}, {6,5}, {4,1}};
    
    // sort(vec3.begin(), vec3.end());                         // so defult sort with first value in ascending order

    // for(auto p : vec3){
    //     cout << p.first << " " << p.second << endl; 
    // }
   
    // vector<pair<int, int>> vec3 = {{4,1}, {1,3}, {6,1}, {4,1}};
    // sort(vec3.begin(), vec3.end(), comparator);                        

    // for(auto p : vec3){
    //     cout << p.first << " " << p.second << endl; 
    // }
    
    cout << endl;
    return 0;
}