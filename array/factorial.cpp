#include<iostream>
#include<math.h>
using namespace std;

int fact(int n){
    int p=n;
    for(int i=n-1;i>1;i--){
        p=p*(i);
    }
    return p;
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}