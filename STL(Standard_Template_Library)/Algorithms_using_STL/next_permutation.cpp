#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string s   = "132141";
    next_permutation(s.begin(), s.end());
    cout << s << endl;

    vector<int> vec = {5,4,7,6,5,4,3,2,1}; 
    next_permutation(vec.begin(), vec.end());

    for(int val : vec){
        cout <<  val << " ";
    }
    cout << endl;

    return 0;
}