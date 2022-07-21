#include<iostream>
#include<math.h>
using namespace std;
 int main(){
     int n;
     cin>>n;
     int c=n;
     int a[n];
    for(int i=0;i<n;i++){
       cin>>a[i];
     }
     while(n>=2){

     for(int i=0;i<n;i++){
         if(a[i]>a[i+1]){
         int s=a[i+1];
         int l=a[i];
         a[i]=s;
         a[i+1]=l;
         continue;
         }
         else continue;
     }
     n--;
     }
     for(int i=0; i<c;i++){
         cout<<a[i]<<" ";
     }
return 0;

 }