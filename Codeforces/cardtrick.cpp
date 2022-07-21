#include<iostream>
using namespace std;

int* shuffle(int* a, int n, int*b, int m, int j){
    if(j<=m){
    int s[b[j-1]];
    for( int i=0; i<b[j-1]; i++){
     s[i] = a[i];
    }
    const int c=b[j-1];
      for( int i=0; i<n-c; i++){
          a[i]=a[b[j-1]];
          b[j-1]++;
      }
      for( int i=n-c; i<n; i++){
          a[i] = s[i-n+c];
      }
      return shuffle(a, n, b, m , j+1);
    }
    else{
        return a;
    }
return a;

}
int main(){
    int tc;
    cin>>tc;
    int count = tc;
    int stre[tc];
    int j=0;
    while(tc>0){
    int n;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n; i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    int b[m];
    for(int i=0 ; i<m; i++){
        cin>>b[i];
    }
    shuffle(a,n, b, m, 1);
    stre[j]=a[0];
    /*for( int i=0; i<n; i++){
          cout<<a[i]<<" ";
    }*/
    tc--;
    j++;
    }
    for( int i=0; i<count; i++){
          cout<<stre[i]<<endl;
    }
return 0;    
}