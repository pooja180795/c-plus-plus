/* works in a tree structure
    max-heap and min-heap they also known as complete binary tree (CBT)
    for PRIORITY QUEUE time-complexity
    top()         = O(1)
    pop(), push() = O(logn)
*/

#include <iostream>
#include <queue>
using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(1);
    pq.push(0);
    pq.push(20);
    pq.push(3);

    while(!pq.empty()){
        cout << pq.top() <<  " ";
        pq.pop();
    }
    cout << endl;

    priority_queue<int, vector<int> , greater<int>> r_pq; // here greater<int> is known as FUNCTOR
    r_pq.push(10);
    r_pq.push(1);
    r_pq.push(0);
    r_pq.push(20);
    r_pq.push(3);

    while(!r_pq.empty()){
        cout << r_pq.top() <<  " ";
        r_pq.pop();
    }
    cout << endl;

    return 0;
}