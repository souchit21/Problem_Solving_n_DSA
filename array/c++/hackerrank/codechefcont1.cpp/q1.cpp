#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int T;

    cin>>T;
     int X[T];
     int Y[T];
     int D[T];
     for(int i=0;i<T;i++){
         cin>>X[i]>>Y[i]>>D[i];
     }
     for(int i=0;i<T;i++){
         if(abs(X[i]-Y[i])<=D[i]){
             cout<<"YES"<<endl;
         }
         else cout<<"NO"<<endl;

     }
     return 0;

}