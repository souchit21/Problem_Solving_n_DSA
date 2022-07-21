#include<iostream>
#include<cstdlib>
using namespace std;
int abso(int a, int b){
    if(a>=b){
        return a-b;
    }
    if(a<b){
        return b-a;
    }
return 0;
}
int main(){
     int tc;
     cin>>tc;
     int c = tc;
     int arr[tc][2];
     int l=0;
     while(tc>0){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
     cin>>a[i];
    }
    bool t=0;
   for( int i=0; i<n; i++){
       for(int j=i; j<n; j++){
           int count =0;
           for(int k=0; k<n; k++){
            if(abso(a[i],a[k]) + abso(a[j],a[k]) == abso(a[i],a[j])){
                count++;
                if(count == n){
                  t=1;
                  arr[l][0]=i;
                  arr[l][1]=j;
                  break;
                }
            }
            else break;
           }
           if(t==1){
               break;
           }
       }
       if(t==1){
           break;
       }
   }
   tc--;
   l++;
     }
 for( int i=0; i<c; i++){
     cout<<arr[i][0]+1<<" "<<arr[i][1]+1<<endl;
 }
}