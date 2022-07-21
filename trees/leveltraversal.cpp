#include<iostream>
#include<queue>
using namespace std;
class node{
   public:
   int val;
   node* left;
   node* right;
   node(int v){
     val = v;
     left = NULL;
     right = NULL;
   }
};
void leveltraversal(node* root){
   static queue<node*> q;
   if(q.empty()){
    q.push(root);
    q.push(NULL);
   }
    while(q.front()!=NULL){
    if(q.front()->left!=NULL){
        q.push(q.front()->left);
    }
    if(q.front()->right!=NULL){
        q.push(q.front()->right);
    }
    cout<<q.front()->val<<" ";
    q.pop();
    }
    q.pop();
    if(q.empty()){
        return;
    }
    q.push(NULL);
    leveltraversal(root);
}
int sum(node* root, int k){
    int l = 0;
    int sum = 0;
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(q.front()!=NULL){
    if(q.front()->left!=NULL){
        q.push(q.front()->left);
    }
    if(q.front()->right!=NULL){
        q.push(q.front()->right);
    }
    if(l==k){
        sum+=q.front()->val;
    }
    q.pop();
    if(q.empty()){

    }
    if(q.front()==NULL){
        q.pop();
        l++;
        q.push(NULL);
    }
    }
return sum;
}
int main(){
 node* a = new node(1);
    a->left = new node(2);
    a->right = new node(3);
    a->left->left = new node(4);
    a->left->right = new node(5);
    a->right->left = new node(6);
    a->right->right = new node(7);
    leveltraversal(a);
    cout<<endl<<sum(a,2);

}