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
    int s=0;
    bool l=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j && a[i]==a[j]){
                l=1;
            }
            else continue;
        }
    if(l==1){
            cout<<i;break;
        }
    }
    return 0;

}