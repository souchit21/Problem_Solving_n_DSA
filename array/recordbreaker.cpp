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
     int  m=0;
     int t=0;
     if(a[0]>a[1]){
         m=m+1;
     }
    for(int i=1;i<n-1;i++){
        for(int j=1;j<=i;j++){
        if(a[i-j]<a[i]){
            t+=1;
           }
        }
        if(a[i]>a[i+1] && i == t){
            m+=1; 
            cout<<m<<endl;
        }
        }
        int s=0;
    for(int j=1;j<=n-1;j++){
        if(a[n-1-j]<a[n-1]){
            s+=1;
           }
           if(s==n-1){
               m+=1;
           }
    }
    cout<<m;
    return 0;
 }