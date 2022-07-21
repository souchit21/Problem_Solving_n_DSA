#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node* next;
    node( int v){
        val = v;
        next = NULL;
    }
    void insert(node* &head, int v){
        node* n = new node(v);
        node* temp = head;
        while( temp -> next != NULL){
            temp = temp->next;
        }
        temp->next = n;
        return;
    }
    void display(node* head){
     node* temp = head;
     while(temp!=NULL){
         cout<<temp -> val<<" ";
         temp = temp->next;
     }
     return;
    }
    void inserthead(node* &head, int v){
    node* n = new node(v);
    node* temp = head;
    head = n;
    n->next = temp;
    }
bool search(node* head, int key){
    node* temp = head;
    while(temp!=NULL){
        if(temp->val == key){
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}
void deletion(node* &head, int v){
  node* temp = head;
  if(temp->val == v){
      temp->next = head;
  node* m= head;
  delete m;
  }
  else while(temp->next->val != v){
      temp = temp->next;
  }
   node* n = temp->next;
  temp->next = temp->next->next;
  delete n;
}
/*void reverse(node* &head, node* last){
   node* temp1 = head;
   if(temp1->next != NULL){
   node* temp2 = temp1-> next;
   temp1->next = temp2 -> next;
   head = temp2;
   temp2->next = temp1;
   return reverse(temp2->next, last);
   }
   else if(head != last){
       return reverse(head, last);
   }
 return;      
   
}*/
node* reverse1(node* &head){
    node* previous = NULL;
    node* crrnt = head;
    node* nxtptr= crrnt->next;
    while(nxtptr!=NULL){
        node* temp1 = nxtptr -> next;
        node* temp2 = crrnt;
        crrnt-> next = previous;
        nxtptr->next = crrnt;
        crrnt = nxtptr;
        nxtptr = temp1;
        previous = temp2;
    }
    head = crrnt;
return head;
}
node* reverse2(node* &head){
       
        node* newhead = reverse2(head -> next);
   
    return head;
}
};
int main(){
  node a(1);
  node b(2);
  a.next = &b;
  //cout<<b.next<<endl;
  node* h = &a;
  a.insert(h,3);
  a.insert(h,4);
  a.reverse1(h);
  a.display(h);
return 0;
}