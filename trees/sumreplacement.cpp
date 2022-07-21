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

int sumreplacement(node* &root){
    if(root == NULL){
        return 0;
    }
    int l = sumreplacement(root->left);
    int r = sumreplacement(root->right);
    root->val =  root->val + l + r;
    return root->val;
}
void preorder(node* root){
    if(root == NULL){
        return;
    }
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
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
    sumreplacement(a);
    preorder(a);
}