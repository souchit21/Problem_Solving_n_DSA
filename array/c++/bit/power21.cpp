#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    if((n&(n-1))==0){
        cout<<"power of two";
    }
    else{
        cout<< "not";
    }
    return 0;
}