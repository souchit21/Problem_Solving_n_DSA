#include<iostream>
#include<math.h>
using namespace std;
 int main(){
     char arr[100];
     cin>>arr;
     int n;
     int j=0;
     while(arr[j]!='\0'){
         n=j+1;
         j+=1;
     }
     int  f=0;
     int t=n/2;
     int i=0;
     for(int i=0;i<t;i++){
         if(arr[i]==arr[n-1-i]) 
         {
             f+=1;
             continue;
         }
         else break;
     }
      if(f==t){
          cout<<"palindrome";
      }
      else{
          cout<<"no palindrome";
      }
      return 0;
    
 }