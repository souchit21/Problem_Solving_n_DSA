#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,reverse,csum,c;
    reverse=0;
    csum=0;
    c=10;
    cin>>n;

    while(n>0){
        reverse = n%10;
        cout<<reverse<<endl;;
        csum+=pow(reverse,3);
        cout<<csum<<endl;
        n=n/c;
    }
  cout<<csum;
}