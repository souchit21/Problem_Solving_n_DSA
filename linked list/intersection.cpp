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
node* intersect(node* head1,node* head2){
    node* temp1 = head1;
    node* temp2 = head2;
    int l=1;
    int r=1;
    while(temp1->next!=NULL){
        temp1=temp1->next;
        l++;
    }
    while(temp2->next!=NULL){
        temp2=temp2->next;
        r++;
    }
    int d = l-r;
    node* temp = head1;
    node* ptr = head2;
    while(d>0){
        temp = temp->next;
        d--;
    }
    while(ptr!=temp){
    ptr = ptr->next;
    temp = temp->next;
    }
    return ptr;

}
int main(){
    node* head1= NULL;
    node* head2 = NULL;
    insert(head1,1);
    insert(head1,2);
    insert(head1,3);
    insert(head1,4);
    insert(head1,5);
    insert(head1,6);
    insert(head2,1);
    insert(head2,2);
    insert(head2,3);
    insert(head2,4);
    insert(head2,5);
    insert(head2,6);

}