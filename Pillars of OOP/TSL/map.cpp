#include <iostream>
#include <map>
#include <set>
using namespace std;

int main()
{
    map<string, int> marks;
    set<int> score;

    marks["pooja"] = 99;
    score.insert(marks["pooja"]);
    marks["pranav"] = 100;
    score.insert(marks["pranav"]);
    marks["abhi"] = 95;
    score.insert(marks["abhi"]);
    marks["sweta"] = 85;
    score.insert(marks["sweta"]);
    marks["devangi"] = 22;
    score.insert(marks["devangi"]);
    marks["shreya"] = 99;
    score.insert(marks["pooja"]);
    marks["dhyey"] = 100;
    score.insert(marks["pranav"]);

    for(auto val : marks){
        cout << val.first << " " << val.second << endl;
    }
    
    for(int val : score){
        cout << val << " ";
    }
    return 0;
}

