#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{
    Node* head;
    Node* tail;

    List(){
        head = tail = NULL;
    }
};

int main(){
    Node n1(1);
    
    return 0;
}