#include<iostream>
using namespace std;

int main(){
     
   int n1,n2;
   cin>>n1>>n2;
   int a[n1][n2];
     for(int i=0;i<n1;i++){
         for(int j=0;j<n2;j++){
             cin>>a[i][j];
         }
     }
     int num;
    cin>>num;
    bool t=0;
    int c=n2/2;
    for(int i=0;i<n1;i++){
        if(num<a[i][c]){
            for(int j=0;j<c;j++){
                if(a[i][j]==num){
                t=1;
                }
            }
        }
        else{
             for(int j=c;j<n2;j++){
                if(a[i][j]==num){
                t=1;
                }
            }

        }
    }

cout<<t;
return 0;


}