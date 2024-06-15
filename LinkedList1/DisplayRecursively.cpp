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
void displayrec(Node* head){
    if(head==NULL) return ;
    cout<<head->val<<" ";
    displayrec(head->next);// 10 20 30 40 

}
void revdisplayrec(Node* head){
    if(head==NULL) return ;
    displayrec(head->next);// 40 30 20 10
     cout<<head->val<<" "; // print in reverse order
    
}
int main(){
   // connect linkedlist using pointer
            Node* a = new Node(10);
            Node* b = new Node(20);
            Node* c = new Node(30);
            Node* d = new Node(40);
   a->next = b;
   b->next = c;
   c->next = d;
    displayrec(a);
    revdisplayrec(a);
}