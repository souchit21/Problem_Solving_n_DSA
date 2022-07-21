#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
int power(int a, int n){
    int c=1;
    for(int i=1;i<=n;i++){
        c=c*a;
    }
    return c;
}
int main(){
    cout<<power(2,10)<<endl;
    int n;
    cin>>n;
    int i=0;
    while((n/(power(2,i)))!=0){
        i++;
    }
    if(n%power(2,i-1)==0){
        cout<<"number is power of two"<<endl<<i-1;
    }
    else{
        cout<<"number is not power if two";
    }
    return 0;
}