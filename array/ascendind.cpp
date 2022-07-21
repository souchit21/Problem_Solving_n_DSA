#include<iostream>
#include<math.h>
using namespace std;
int maxN(int a[],int n){
   int  maxi=a[0];
   int s;
   for(int i=0;i<n;i++){
       maxi=max(maxi,a[i]);
       if(maxi==a[i]){s=i;}
   }
   return s;
}
int minN(int a[],int n){
   int  mini=a[0];
   int s;
   for(int i=0;i<n;i++){
       mini=min(mini,a[i]);
       if(mini==a[i]){s=i;}
   }
   return s;
}


 int main(){
     int a[]={1,8,4,6,3};
     int b[4]=a[]-a[1];
     for(int i=0;i<4;i++){
         cout<<b[i]<<" ";
     }
     return 0;
 }