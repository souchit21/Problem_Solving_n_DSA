#include<iostream>
using namespace std;
 int main(){
     int n1,n2,n3;
     cin>>n1>>n2>>n3;
     int a[n1][n2];
     int b[n2][n3];
     int c[n1][n3];
     for(int i=0;i<n1;i++){
         for(int j=0;j<n2;j++){
             cin>>a[i][j];
         }
     }
     for(int i=0;i<n2;i++){
         for(int j=0;j<n3;j++){
             cin>>b[i][j];
         }
     }
     for(int r=0;r<n1;r++){
         for(int m=0;m<n3;m++){
             c[r][m]=0;
             for(int i=0;i<n2;i++){

                 c[r][m]+=a[r][i]*b[i][m];
             }
             
         }
     }
     for(int i=0;i<n1;i++){
         for(int j=0;j<n3;j++){
             cout<<c[i][j]<<" ";
         }
         cout<<endl;
     }
     return 0;


 }