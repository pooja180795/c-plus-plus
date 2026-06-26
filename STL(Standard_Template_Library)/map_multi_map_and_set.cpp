/*  stores key, value pair      
    here key will be unique always and sort keywise assending order.
    MAP: TIME COMPLEXITY
        -insert(), erase(), count = O(logn) (works as self balancing tree so)
        
    SET: TIME COMPLEXITY
        -insert(), erase(), count = O(logn) (works as self balancing tree so)
        -set stores unique data only
        -and stores in sorted manner
*/

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

    
    
    for(int val : score){
        cout << val << " ";
    }
    cout << endl;
    marks.insert({"nidhi", 98});
    marks.emplace("tripti", 70);

    for(auto val : marks){
        cout << val.first << " " << val.second << endl;
    }
    cout << endl;
    marks.erase("devangi");
    for(auto val : marks){
        cout << val.first << " " << val.second << endl;
    }
    if(marks.find("pooja") != marks.end()){
        cout << "found" << endl;
    }
    else{
        cout << "not found" << endl;
    }

    /* then comes multi+map
    in which duplication of key is possible
    */

    multimap<string, int> mp;
    // mp["tv"] = 100    this is not possible
    mp.emplace("tv", 100);
    mp.emplace("tv", 100);
    mp.emplace("tv", 100);
    mp.emplace("tv", 100);
    mp.emplace("headphones", 200);

    for(auto mpp : mp){
        cout << mpp.first << " " << mpp.second << endl;
    }

    mp.erase("tv");
    for(auto mpp : mp){
        cout << mpp.first << " " << mpp.second << endl;
    }
    return 0;
}

