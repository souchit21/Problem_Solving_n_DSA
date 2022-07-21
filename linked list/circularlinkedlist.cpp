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
void insertatHead(node* &head, int v){
    node* n = new node(v);
    node* temp = head;
    if(head == NULL){
        head = n;
        n->next = head;
        return;
    }
    while(temp->next!=head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
return;   
}
void insertatTail(node* &head, int v){
    node* n = new node(v);
    node* temp = head;
    if(head == NULL){
        return insertatHead(head, v);
    }
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next = n;
    n->next = head;
return;
}
void deletion(node* &head, int pos){
    node* temp = head;
    if(pos == 1){
        while(temp->next!=head){
            temp=temp->next;
        }

     node* n = head;
     temp->next = head->next;
     head = n->next;
     delete n;
     return;
    }
    pos= pos-2;
    while(pos>0){
        temp=temp->next;
        pos--;
    }
    node* n = temp->next;
    temp->next = n->next;
    delete n;
return;
}
void display(node* head){
    node* temp = head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
    cout<<endl;
}
int main(){
    node* head=NULL;
    int arr[]={1,2,3,4,5,6};
    for(int i=0; i<6; i++){
        insertatTail(head,arr[i]);
    }
    /*insertatTail(head,1);
    insertatTail(head,2);
    insertatTail(head,3);
    insertatTail(head,4);*/
    
    insertatHead(head, 9);
    display(head);
    deletion(head,1);
    display(head);


}
