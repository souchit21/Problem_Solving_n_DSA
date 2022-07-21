#include<iostream>
using namespace std;
void merge(int* arr, int l, int mid, int r){
     int n1 = mid-l +1;
     int n2 = r-mid;
    int m[n1];
    int n[n2];
    for(int i=l; i<=mid; i++){
        m[i-l]=arr[i];
    }
    for(int i=mid+1; i<=r; i++){
        n[i-mid-1]=arr[i];
    }
    int i=0;
    int j=0;
    int k =l;
    while(i<n1 && j<n2){
    if(m[i]<n[j]){
     arr[k] = m[i];
     i++;
     k++;
    }
    else{
        arr[k] = n[j];
        j++;
        k++;
    }
    }
   while(i<n1){
       arr[k] = m[i];
       i++;
     k++;
   }
   while(j<n2){
       arr[k] = n[j];
       j++;
     k++;
   }
return;
}

void mergeSort(int* arr, int l, int r){
    
       if(l<r){
           int mid = (l+r)/2;
           mergeSort(arr, l, mid);
           mergeSort(arr, mid+1, r);
           merge(arr, l, mid, r);
       }
       return;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for( int i=0; i<n; i++){
        cin>>a[i];
    }
    mergeSort(a,0, n-1 );
    for( int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}