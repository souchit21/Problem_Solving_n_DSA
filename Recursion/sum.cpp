#include<iostream>
using namespace std;

 int sum(int n){
       int p;
     if(n==0){
       return 0;
    }
      p=sum(n-1);
  return n + p;
 }

int main(){
    int n;
    cin>>n;
   cout<<sum(n);
}