/*  list is implemented as doubly linked list. so operations like push_front(), pop_front() and all available in list 
    other functions like erase empty, size, begin, rbegin, end, rend work same as in vector    
    but important random access is not possible    
*/
#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> myList;
    list<int> myList2 = {15,6,17,8};
    // myList.push_back(1);    // 1
    // myList.push_back(2);    // 1 2
    // myList.push_front(3);   // 3 1 2
    // myList.push_front(4);   // 4 3 1 2

    // myList.pop_front();     // 3 1 2
    // myList.pop_back();      // 3 1

    // myList.erase(myList.begin());

    // for(int val : myList){
    //     cout << val << " ";
    // }

    myList2.erase(myList2.begin());
    myList2.insert(myList2.begin(), 100);

     for(int val : myList2){
        cout << val << " ";
    }

    

    cout << endl;
    return 0;
}