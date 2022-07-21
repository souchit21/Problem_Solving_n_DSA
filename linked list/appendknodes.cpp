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
void append(node* &head, int k){
    node* temp = head;
    int count = 1;
    while(temp->next!=NULL){
        temp =temp->next;
        count++;
    }
    node* temp1 =temp;
    temp =head;
    int t = count-k;
    while(t>1){
        temp=temp->next;
        t--;
    }
      temp1->next  = head;
    head = temp->next;
    temp->next =NULL;
return;
}
int main(){
    node* head =NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    insert(head,6);
    append(head,3);
    display(head);
}