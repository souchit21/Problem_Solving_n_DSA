#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};
   void insert(node* &head, int v){
        node* n = new node(v);
       if(head==NULL){
          head=n;
          return;
       }
       node* temp = head;
       if(temp->next != NULL){
           temp=temp->next;
       }
       temp-> next = n;
    return;
   }
   void display(node* head){
     node* temp = head;
     while(temp!=NULL){
         cout<<temp -> data<<" ";
         temp = temp->next;
     }
     cout<<endl;
    }
   // reverse(node* head){

    //}
int main(){
    node* head = NULL;
    insert(head, 1);
    //insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);
    display(head);
}