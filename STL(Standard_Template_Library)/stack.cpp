/* LIFO - works in last in first out manner
for STACK time-complexity
    top() =   O(1)
    pop()   =   O(1)
    push()  =   O(1)
*/

#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    stack<int> s2;
    s2.push(10);
    s2.push(20);
    s2.push(30);
    stack<int> s3;
    s3.swap(s2);
    cout << "s2 size = " << s2.size() << endl;
    cout << "s3 size = " << s3.size() << endl;
    return 0;
}