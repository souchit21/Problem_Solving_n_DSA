#include<iostream>
#include<math.h>
using namespace std;

int binary(int a[],int n,int key){
    int s=0;
    int e=n;
    while(s<=e){
    if(a[(s+e)/2]==key){
        return 0;
    }
    else if(a[(s+e)/2]>key){
        e=(s+e)/2 -1;
    }
    else {
        s=(s+e)/2 + 1;
         }
    }

    
return -1;
}

int main(){
    int n,key;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>key;
    cout<<binary(a[n],n,key);
    return 0;

}