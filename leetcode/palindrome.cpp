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
    if(head == NULL){
        head = n;
        return;
    }
    while(temp->next!=NULL){
        temp = temp-> next;
    }
    temp = n;
return;
}
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}
bool chk(node* head){
    
}
int main(){
    node* head = NULL;
    insert(head, 1);
    insert(head, 2);
    display(head);

}