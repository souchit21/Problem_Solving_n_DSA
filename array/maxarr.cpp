#include<iostream>
#include<math.h>
using namespace std;
 int main(){
     int n;
     int m;
     
     cin>>n;
     int arr[n];
     int maxno,minno;
     
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     maxno=arr[0];
     minno=arr[0];
     for(int i=0;i<n;i++){
       if(arr[i]>maxno){
           maxno=arr[i];
       }
       if(arr[i]<minno){
           minno=arr[i];
       }
     }
     cout<<maxno<<endl<<minno;
     

     return 0;
 }