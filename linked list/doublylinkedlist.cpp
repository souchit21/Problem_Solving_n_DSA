#include<iostream>
using namespace std;
 
class node{
    public:
    int data;
    node* prev;
    node* next;

node(int v){
    data = v;
    next=NULL;
    prev = NULL;
}
};
void insertatHead(node* &head, int v){
    node* n =new node(v);
    node* temp= head;
    head = n;
    n->next = temp;
    temp->prev = n;
return;
}
void insertatTail(node* &head, int v){
    node* n =new node(v);
  node* temp= head;
  if(temp == NULL){
    head = n;
  }
  else{
      while(temp->next != NULL){
          temp = temp-> next;
      }
      temp->next = n;
      n-> prev = temp;
  }
  return;
}
void deletenode(node* &head, int pos){
    node* temp = head;
    int count = 1;
    while(count <= pos){
        if(count == pos){
         node* n = temp;
         if(temp->prev == NULL){
             head = temp->next;
             head->prev = NULL;
             delete n;
         }
         else{
         temp->prev->next = temp-> next;
         if(temp->next!=NULL){
             temp-> next -> prev = temp ->prev;
         }
         delete n;
         }
        }
        temp = temp->next;
        
        count++;
    }
return;      
}
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp-> next;
    }
return;
}
int main(){
    node* head =NULL;
   
    insertatTail(head, 1);
    insertatTail(head, 2);
    insertatTail(head, 3);
    insertatTail(head, 4);
    insertatTail(head, 5);
    insertatTail(head, 6);
    insertatHead(head, 0);
    deletenode(head,7);
    display(head);
}