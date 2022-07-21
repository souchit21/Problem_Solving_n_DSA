#include<iostream>
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
void preorder(node* root){
    if(root == NULL){
        return;
    }
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}
void postorder(node* root){
     if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";

}
int main(){
    node* a = new node(1);
    a->left = new node(2);
    a->right = new node(3);
    a->left->left = new node(4);
    a->left->right = new node(5);
    a->right->left = new node(6);
    a->right->right = new node(7);
    preorder(a);
    cout<<endl;
    inorder(a);
    cout<<endl;
    postorder(a);

}