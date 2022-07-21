#include<iostream>
using namespace std;
class node{
 public:
  int data;
  node* next;
 node(int v){
      data = v;
      next = NULL;
 }
};
void insertTail(node* &head, int v){
    node* n = new node(v);
    node* temp = head;
    while(temp-> next!=0){
        temp = temp->next;
    }
    temp->next = n;
return;
}
void display(node* head){
     node* temp = head;
     while(temp!=NULL){
         cout<<temp-> data<<" ";
         temp=temp-> next;
     }
return;
}
int main(){
    node* head = NULL;
    insertTail(head, 1);
    insertTail(head, 2);
    insertTail(head, 3);
    insertTail(head, 4);
    display(head);
}