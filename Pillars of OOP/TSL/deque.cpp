/*  deque = double ended queue so Random access is possible like vector or array
    dequeue works for pop element from last 
    erase, begin, end, rbegin, rend all work same   */
#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int> d = {1,2,3};

    for(int val : d){
        cout << val << " ";
    }
    cout << endl;
    cout << d[1] << endl;      // for list this is not possible
    return 0;
}

