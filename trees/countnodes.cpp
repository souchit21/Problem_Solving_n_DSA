#include<iostream>
using namespace std;
class node{
  public:
  int val;
  node* left;
  node* right;
  node(int v){
      val = v;
      left= NULL;
      right = NULL;
  }
};
int count(node* root){
    static int c = 0;
    static int sum;
    if(root == NULL){
        return c;
    }
    else{
        c++;
        sum+=root->val;
    }
    count(root->left);
    count(root->right);
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
    cout<<count(a);
}