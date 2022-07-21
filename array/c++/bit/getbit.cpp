#include<iostream>
 using namespace std;
 int main(){
     int n=5;
     int n1=1<<3;
     
     cout<<n1<<endl;
     cout<<(n&(n1))<<endl;
    if((n&(n1))!=0){
        cout<<"at position 2 bit is 1";
    }
     
     return 0;
 }