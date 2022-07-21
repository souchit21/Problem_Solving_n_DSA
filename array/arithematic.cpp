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
     int d[n-1];
     int d1[n-2];
     for(int i=0;i<=n-2;i++){
         d[i]=a[i]-a[i+1];
         cout<<d[i]<<endl;
     }
      for(int i=0;i<=n-3;i++){
         d1[i]=d[i]-d[i+1];
         if(d1[i]==0){
             cout<<a[i]<<endl;
             }

     }
     return 0;
 }