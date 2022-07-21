#include<iostream>
using namespace std;

 int locc (int a[], int n ,int i, int k){
         if(i==0){
            if(a[i]==k){
                return 0;
            }
         }
         if(a[i]==k){
             return i;
         }
         else return locc(a, n, i-1, k);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<locc(a,n,n-1,1);
}