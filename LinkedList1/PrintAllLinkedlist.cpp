#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    a.next = &b;
    b.next = &c;
    c.next = &d;
//   Node temp = a;
//   while(temp.next!=NULL){
//     cout<<temp.val<<" ";
//     temp = *(temp.next);// 40 is not print so use like this 
//   }
    Node temp = a;
    while(1){ // while 1 for infinite loop
    cout<<temp.val<<" ";
    if (temp.next==NULL) break; // it print 40 also 
    temp = *(temp.next);
    }
}