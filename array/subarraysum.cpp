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
    int s;
    cin>>s;
    int k;
    for(int i=0;i<n;i++){
        k=0;
        for(int j=i;j<n;j++){
        k=k+a[j];
        if(k==s){
            cout<<i<<" "<<j;
        }
            
        }
    }
    return 0;
 }