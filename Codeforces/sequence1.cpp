#include<bits/stdc++.h>
//#include<string>
#include<algorithm>
//#include<vector>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    int ans[tc];
     for(int i=0; i<tc; i++){
     ans[i]=0;
 }
 
 for(int j=0; j<tc; j++){
     int n;
     cin>>n;
     int a[n];
     for(int i=0; i<n; i++){
         cin>>a[i];
     }
    
    int l=n-1;
    while(l>0){
    int temp;
    for(int i=0; i<n-1;i++){        
            if(a[i]>a[i+1]){
            temp=a[i+1];
            a[i+1]=a[i];
            a[i]=temp;
            }
        }
        l--;
    }
    bool t=0;
    int c=0;
    for(int i=0; i<n; i++){
      if( a[i]==0){
          c++;
          t=1;
      }
  }

  int count=0;
  for(int i=0; i<n-1; i++){
      if(a[i]==a[i+1] && a[i]!=0){
          a[i]=0;
          count++;
      }
  }
  int k=0;
  if(count!=0){
      
  for( int p=0; p<n; p++){
    if(a[p]!=0){
     k++;
    }
    }
  }
  if(count == 0){
  count = n+1;

  }

 if(t==1){
     count = n-c;
 }

 ans[j]=count +k;
 }
for(int i=0; i<tc; i++){
  cout<<ans[i]<<endl;
}
}