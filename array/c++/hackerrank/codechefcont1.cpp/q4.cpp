#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    int N;
    int f[T];
    for(int j=0;j<T;j++){
        f[j]=0;
        cin>>N;
        for(int i=1;i<=N;i++){
         if(f[j]>=0){
             f[j]-=i;
         }
         else{
            f[j]+=i; 
         }
        }

        
    }
    for(int j=0;j<T;j++){
        cout<<f[j]<<endl;
    }
    return 0;


}