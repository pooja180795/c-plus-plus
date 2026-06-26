/* FIFO - works in first in first out manner 
for QUEUE time-complexity
    front() =   O(1)
    pop()   =   O(1)
    push()  =   O(1)
*/

#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(1);
    q.push(12);
    q.push(21);

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    return 0;
}