#include<iostream>
using namespace std;

int main(){
    int n,reverse;
    int c=10;
    cin>>n;
    reverse=0;
    while(n>0){
    reverse = reverse*10 + n%10;
    n=n/c;
    }
    cout<<reverse;
    return 0;

}