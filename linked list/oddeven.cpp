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
void insert(node* &head, int v){
    node* n = new node(v);
    node* temp = head;
    if(temp == NULL){
     head = n;
    }
    else{
        while(temp-> next != NULL){
        temp = temp-> next;
    }
    temp-> next = n;
    }
 return;
}
void display(node* head){
    node* temp = head;
    while(temp!= NULL){
      cout<<temp->data<<" ";
      temp = temp->next;
    }
    return;
}
void change(node* &head){
    node* odd = head;
    node* even = head->next;
    
    
}
int main(){
     node* head =NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    insert(head,6);
}