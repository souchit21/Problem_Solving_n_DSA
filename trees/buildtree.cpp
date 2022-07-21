#include<algorithm>
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
int search(int* in, int start, int end, int curr){
    for( int i=start; i<=end; i++){
        if(in[i] == curr){
            return i;
        }
    }
 return -1;
}
node* buildtree(int*  pr, int* in, int start, int end){
     static int idx = 0;
    if(start > end){
         return NULL;
     }
     int curr = pr[idx];
     node* root = new node(curr);
     idx++;
     int pos = search(in, start, end, curr);
     if(end == start){
         return root;
     }
     root->left = buildtree(pr, in, start, pos-1);
     root->right = buildtree(pr, in, pos+1, end);
    return root;
}
void dinorder(node* root){
    if(root == NULL){
        return;
    }
    dinorder(root->left);
    cout<<root->val<<" ";
    dinorder(root->right);
return;
}
int main(){
    int preorder[] = {1,2,4,3,5};
    int inorder[] = {4,2,1,5,3};
    //cout<<buildtree(preorder,inorder,0,4)->val<<endl;
    dinorder(buildtree(preorder,inorder,0,4));
    
}