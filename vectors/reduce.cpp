#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int b[n];
    for(int i=0; i<n; i++){
        b[i]=arr[i];
    }
    int count = 0;
    while(count<n-1){
    for(int i=0; i<n; i++){
        if(arr[i]>arr[i+1]){
        int temp;
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        }

    }
    count++;
}

int k=0;
for(int i=0 ; i<n; i++){
    for( int j=0; j<n; j++){
     if(arr[i]==b[j]){
         b[j]=k;
         k++;
     }
    }
}
for(int i=0; i<n; i++){
        cout<<b[i]<<" ";
    }
}
