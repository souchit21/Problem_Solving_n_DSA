#include<iostream>

using namespace std;
int* bubblesort(int* a, int n){

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
    return a;
}
int main(){
int tc;
cin>>tc;
int c = tc;
int  a[tc];
int j=0;
while(tc>0){
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubblesort(arr,n);
   // for(int i=0;i<n;i++){
        //cout<<arr[i]<<endl;
   // }
    int count;
    bool t=0;
    for(int i=0 ; i<n; i++){
        count = 0;
        for(int j =i+1; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
                if(count==2){
                    t=1;
                    a[j]=arr[i];
                    break;  
                }
            }
        }
        if(t==1){
            break;
        }        
    }
    if(t!=1){
        a[j]=-1;
    }
tc--;
j++;
}
for(int i=0; i<c; i++){
    cout<<a[i]<<endl;
}
return 0;
}