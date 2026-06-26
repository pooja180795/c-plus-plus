/*
    - sort in random order
    - keys cant be duplicate in it
    TIME COMPLEXITY
    insert(), erase(), count = O(1)
*/
#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<string, int> mp;
    
    mp.emplace("tv", 100);
    mp.emplace("mobile", 200);
    mp.emplace("headphones", 50);
    mp.emplace("c-cable", 100);
    mp.emplace("hdmi-cable", 200);
    mp.emplace("tv", 50);        // this wont make any change
    mp.insert({"tv", 3});       // this wont make any change

    for(auto m : mp){
        cout << m.first << " " << m.second << endl;
    }
    return 0;
}