#include<iostream>
using namespace std;
 bool check(int a[], int n){
     if(n==2){
         return a[0]<a[1];
     }
        if(  (a[0]<a[1]) && check(a+1,n-1) ){
            return 1;
        }
        else return 0;
 }

int main(){
   int n;
    cin>>n;
    int a[n];
    for (int i=0 ; i<n; i++){
        cin>>a[i];
    }
    if(check(a,n)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
return 0;
}
 