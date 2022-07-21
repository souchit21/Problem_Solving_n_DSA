#include<iostream>
#include<queue>
#include<cmath>
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
int height1(node* root){
    static int l=1;
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
    q.pop();
    if(q.front()==NULL){
        q.pop();
        if(q.empty()){
            return l;
        }
        else{
        q.push(NULL);
        l++;
        }
    }
    }
return l;
}
int height2(node* root){
    if(root==NULL){
        return 0;
    }
    int l = height2(root->left);
    int r = height2(root->right);
    return max(l, r) + 1;
}

int main(){
     node* a = new node(1);
    a->left = new node(2);
    a->left->left = new node(4);
    a->left->right = new node(5);
    a->left->right->right = new node(9);
    a->left->left->left = new node(6);
    a->left->left->right = new node(7);
    a->left->left->left->left = new node(8);
    cout<<height1(a)<<" ";
    cout<<height2(a);
}