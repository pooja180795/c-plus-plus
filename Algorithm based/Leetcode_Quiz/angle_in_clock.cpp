/*
Given two numbers, hour and minutes, return the smaller angle (in degrees) formed between the hour and the minute hand.

Answers within 10-5 of the actual value will be accepted as correct.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    double findAngle(int hour, int minutes){        //O(1)
        double mAngle = minutes * 6;
        double hAngle = hour * 30 + minutes * 0.5;
        double angle_one = mAngle - hAngle;
        if(angle_one < 0){ angle_one = -angle_one; }
        double angle_two = 360 - angle_one;
        return angle_one <= angle_two ? angle_one : angle_two;
    }
};

int main(){
    Solution s;
    int hour = 3;
    int minutes = 30;
    cout << s.findAngle(hour, minutes) << endl;
    return 0;
}