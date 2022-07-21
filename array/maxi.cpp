#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n;i++){
        cin>>a[i];
    }
    int maxi=a[0];
    int s=0;
    int l=0;
    for(int i=0; i<n;i++){
        for(int j=0;j<i;j++){
            if(a[j]>a[j+1]){
            s=a[j+1];
            l=a[j];
            a[j]=s;
            a[j+1]=l;
            }
            else continue;
        }
        cout<<a[i]<<endl;
    }
return 0;
}