#include<iostream>
using namespace std;
 int fact(int n){
        if (n==1)
        {
        return 1;
        }
        int f= n*fact(n-1);
        return f;
 }
 int main(){
     int n;
     cin>>n;
     cout<<fact(n);
 }