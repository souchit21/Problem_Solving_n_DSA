#include<iostream>
#include<math.h>
using namespace std;
 int main(){
     int T;
     cin>>T;
     int N[T];
     int X[T];
     for(int i=0;i<T;i++){
         cin>>N[i]>>X[i];
     }
     for(int i=0;i<T;i++){
         cout<<2*N[i]+1-X[i]<<endl;
     }
     return 0;
 }