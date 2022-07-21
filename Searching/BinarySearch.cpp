#include<iostream>
using namespace std;

int binarySearch(int a[], int n, int k){
     int s,e;
     s=0;
     e=n-1;
     int mid;
     while(s<=e){
         mid=(s+e)/2;
         if(a[mid]==k){
          return mid;
         }
         else if(a[mid]>k){
           e=mid-1;
         }
         else if(a[mid]<k){
           s=mid+1;
         }
     }
return -1;
}

int main(){
    int n;
    int key;
    cin>>n>>key;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<<binarySearch(arr,n,key);
return 0; 
}