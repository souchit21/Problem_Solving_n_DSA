#include<iostream>
using namespace std;
int power(int n, int p){
    if(p==0){
        return 1;
    }
    int t = n*power(n,p-1);
    return t;
}
int main(){
    int n;
    int p;
    cin>>n>>p;
    cout<<power(n,p);
}