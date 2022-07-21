#include<iostream>
using namespace std;
int max(int a[], int n){
    int s[n];
    for(int i=0; i<n; i++){
        s[i]=a[i];
    }
        int j=n-1;
    while(j>0){
    int temp;
    for(int i=0; i<n;i++){
            if(a[i]>a[i+1]){
            temp=a[i+1];
            a[i+1]=a[i];
            a[i]=temp;
            }
        }
        j--;
    }
    for( int i=0; i<n;i++){
        if(s[i]==a[n-1]){
            return i;
        }
    }
string valcan(int*arr , int n){
    
}


}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
   cout<<max(a,n);

    
}