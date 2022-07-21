#include<iostream>
using namespace std;

int linearSrch(int a[], int n, int k){
    int c;
    bool t=0;
          for(int i=0; i<n; i++){
              if(a[i]==k){
                  c=i;
                  t=1;
                  break;
              }
          }
          if(t!=1){
              c=-1;
          }
 return c;
}

int binarySrch(int a[], int n, int k){
    if(a[n/2]<k){
        for(int i=n/2; i<n;i++){
          if(a[i]==k){
              return i;
          }
        }
    }
    else{
        for(int i=0; i<n/2;i++){
          if(a[i]==k){
              return i;
          }
        }
    }
    return -1;
    
}
int main(){
    int n;
    int key;
    cin>>n>>key;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<binarySrch(arr,n,key)<<endl<<linearSrch(arr,n,key);
    return 0;
}