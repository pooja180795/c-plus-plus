#include <iostream>
#include <vector>
using namespace std;



int main(){
    // pair<int ,int> p = {1, 89};
    // pair<int, pair<string, int>> p2 = {1, {"pooja", 90}};
    
    // cout << p.first << " ";
    // cout << p.second << endl;

    // cout << p2.first << " ";
    // cout << p2.second.first << " ";
    // cout << p2.second.second << endl;

    vector<pair<int, int>> vec = {{1,2}, {3,4}};

    vec.push_back({6,7});       //{} needed is push_back
    vec.emplace_back(9, 10);    //{} not needed in emplace_back
    

    for(pair<int, int> p : vec){
    //for(auto p : vec){  
        cout << p.first << " " << p.second << endl;
    }


    return 0;
}