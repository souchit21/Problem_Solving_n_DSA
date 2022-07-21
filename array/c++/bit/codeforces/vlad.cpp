#include<iostream>
using namespace std;
 int maxx(int a[], int n){
     int max;
     for(int i=0;i<n;i++){
         int s=0;
         for(int j=0;j<n;j++){
             if(a[i]>a[j]){
                        s+=1;
             }
             else if(a[i]<a[j]){
                 break;
                 }
             }
         if(s==n-1){
             max=i;break;
         }
         }
         return max;
     }
 
int main(){

    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    for( int j=0;j<sum;j++){
        cout<<maxx(arr,n)<<endl;
        arr[maxx(arr,n)]=arr[maxx(arr,n)]-1;
        
    }
    int m=0;
    for(int j=0;j<n;j++){
        if(arr[j]==0){
            m++;
    
        }
        else{
            continue;
        }
    }
    if(m==n){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }


  return 0;
}