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
node* reverseKnode(node* &head, int k){
     node* crrnt = head;
     node* previous = NULL;
     node* nextptr;
     int count = 0;
     while(crrnt!=NULL && count<k){
         nextptr = crrnt-> next;
         crrnt -> next = previous ;
         previous =crrnt;
         crrnt  = nextptr;
         count++;
     }
     if(nextptr!= NULL){
     head -> next = reverseKnode(nextptr, k);
     }
     return previous;
    
}
void makecycle(node* head, int pos){
    node* temp= head;
    node* startnode;
    int count=1;
    while(temp->next!=NULL){
        if(count == pos){
        startnode =temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startnode;
return;
}
bool cycle(node* head){
    node* tor = head;
    node* rab = head;

    while( rab!= NULL && rab->next!= NULL){
        tor=tor->next;
        int c=2;
        while(c>0){
        rab = rab->next;
        c--;
        }
     if(tor == rab){
        return 1;
    }
    }
     return 0;
}
void deletell(node* head){
    node* tor = head;
    node* rab = head;

    while( rab!= NULL && rab->next!= NULL){
        tor=tor->next;
        int c=2;
        while(c>0){
        rab = rab->next;
        c--;
        }
     if(tor == rab){
        rab = head;
        while(rab->next!=tor->next){
            rab=rab->next;
            tor=tor->next;
        }
            tor->next = NULL;
            break;
    }
    }
return ;
}
int main(){
    node* head =NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    insert(head,6);
    makecycle(head,3);
    //cout<<cycle(head);
      deletell(head);
    //node* newhead = reverseKnode(head,2);
    display(head);
return 0;
}