#include<iostream>
using namespace std;
int main(){
   int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int j=n-1;
    while(j>0){
    int temp;
    for(int i=0; i<n;i++){
            if(a[i]>a[i+1]){
            temp=a[i+1];
            a[i+1]=a[i];
            a[i]=temp;
            }
        }
        j--;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;


}