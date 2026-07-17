/*
You are given an array people where people[i] is the weight of the ith person, and an infinite number 
of boats where each boat can carry a maximum weight of limit. Each boat carries at most two people at 
the same time, provided the sum of the weight of those people is at most limit.

Return the minimum number of boats to carry every given person.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int numRescueBoats(vector<int>& people, int limit){
    sort(people.begin(), people.end());
    int totalBoat = 0;
    int n = people.size();
    int i = 0;
    int j = n-1;
    while(i <= j){
        if(people[i] + people[j] <= limit){
            totalBoat++;
            i++;
            j--;
        }
        else{
            if(people[j] <= limit){
                totalBoat++;
                j--;
            }
            else{
                return -1;
            }
        }
    }
    return totalBoat;
}

int main(){
    vector<int> people = {3,5,3,4};
    int limit = 5;
    cout << numRescueBoats(people, limit) << endl;
    return 0;
}