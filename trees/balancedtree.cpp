#include<iostream>
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
int mod(int a, int b){
    if(a-b>=0){
        return a-b;
    }
    else return b-a;
}
int height(node* root){
    if(root==NULL){
        return 0;
    }
    int l = height(root->left);
    int r = height(root->right);
    return max(l, r) + 1;
}
bool balance(node* root){
    if(root==NULL){
        return 1;
    }
    if(balance(root->left)==0){
        return 0;
    }
    if(balance(root->right)==0){
        return 0;
    }
    int l = height(root->left);
    int r = height(root->right);
    if(mod(l , r) <= 1){
       return 1;
    }
    else return 0;
}
int main(){
     node* a = new node(1);
    a->left = new node(2);
    a->right = new node(3);
    a->left->left = new node(4);
    a->left->right = new node(5);
    a->right->left = new node(6);
    a->right->right = new node(7);
    
    cout<<balance(a);

}