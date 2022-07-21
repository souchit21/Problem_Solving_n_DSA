#include<iostream>
#include<math.h>
using namespace std;
 
 int main(){
     int n;
     cin>>n;
     int a[n];
     
     for(int i=0;i<n;i++){
       cin>>a[i];
     }
     for(int i=0;i<n;i++){
         for(int j=i+1;j<n;j++){
             if(a[i]>a[j]){
                 int s=a[i];
                 int l=a[j];
                 a[i]=l;
                 a[j]=s;
                 break;
             }
             else continue;

             }
         }
      for(int i=0;i<n;i++){
       cout<<a[i]<<" ";
     }
        
     return 0;
 }