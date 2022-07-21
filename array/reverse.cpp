#include<iostream>
using namespace std;
 int main(){
     int n,a,b,c,d;
     int const1=10,const2=100,const3=1000;
     
     cin>>n;
     a=n%const1;
      d=(n/const3);
     c=abs((n/const2)-(d*10));
    
     b=abs((n-(1000*(d)+100*(c)))/const1);
     if(d!=0)
     cout<<a<<b<<c<<d;
     else if(c==0)
           cout<<a<<b;
           else cout<<a<<b<<c;
           

     

 }