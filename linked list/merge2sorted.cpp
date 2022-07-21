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
int length(node* head){
    node* temp = head;
    int count = 1;
    while(temp->next!=NULL){
     temp = temp->next;
     count++;
    }
return count;
}
void display(node* head){
    node* temp = head;
    while(temp!= NULL){
      cout<<temp->data<<" ";
      temp = temp->next;
    }
    return;
}
node* merge(node* &head1, node* &head2){
    node* head=NULL;
    node* temp1 = head1;
    node* temp2 = head2;
    while(temp1!=NULL && temp2!=NULL){
    if(temp1->data<temp2->data){
        insert(head, temp1->data);
        temp1 = temp1->next;
    }
    else{
         insert(head, temp2->data);
        temp2 = temp2->next;

    }
    }
    if(temp1==NULL){
        while(temp2!=NULL){
             insert(head, temp2->data);
             temp2 = temp2->next;
            }
            
        }
    else if(temp2==NULL){
         while(temp1!=NULL){
                insert(head, temp1->data);
            temp1 = temp1->next;
        }


    }
return head;
    
}
node* recursivemerge(node* &head,node* &head1, node* &head2){
    node* temp1 = head1;
    node* temp2 = head2;
    if(temp1!=NULL && temp2!=NULL){
    if(temp1->data<temp2->data){
        insert(head, temp1->data);
        temp1 = temp1->next;
        return recursivemerge(head, temp1, temp2);
    }
    else{
         insert(head, temp2->data);
        temp2 = temp2->next;
        return recursivemerge(head, temp1, temp2);
    }
    }
    else if(temp1==NULL && temp2!=NULL){
         insert(head, temp2->data);
             temp2 = temp2->next;
             return recursivemerge(head, temp1, temp2);
    }
    else if(temp2==NULL && temp1!=NULL){
         insert(head, temp1->data);
             temp1 = temp1->next;
             return recursivemerge(head, temp1, temp2);
    }
return head;
}
int main(){
    node* head1 = NULL;
    node* head2 = NULL;
    node* head = NULL;
    insert(head1, 1);
    insert(head1, 4);
    insert(head1, 5);
    insert(head1, 7);
    insert(head2, 2);
    insert(head2, 3);
    insert(head2, 6);
   // display(merge(head1, head2));
    //cout<<endl;
    display(recursivemerge(head, head1, head2));


}