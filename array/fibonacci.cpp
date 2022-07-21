#include<iostream>
#include<math.h>
using namespace std;
 
 void print(int n){
     int a=0;int b=1;
     for(int i=0; i<n;i++){
         int s=a+b;
         cout<<s<<" ";
         a=b;
         b=s;
     }
     return;
 }
 int main(){
     print(10);
 return 0;
 }