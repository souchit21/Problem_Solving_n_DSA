#include<iostream>
#include<math.h>
using namespace std;

 int main(){
     int T;
     cin>>T;
     int n[T];
     for(int j=0;j<T;j++){
         int N;
         cin>>N;
         int S[N];
         int D[N];
         for(int i=0;i<N;i++){
             cin>>S[i];
         }
         for(int i=0;i<N;i++){
             cin>>D[i];
         }
         int s=0;
         for(int i=0;i<N;i++){
             if(S[i]==D[i]){
                 s=s+1;
             }
            
         }
         n[j]=s;
         
     }
     for(int j=0;j<T;j++){
         cout<<n[j]<<endl;
     }
return 0;

 }