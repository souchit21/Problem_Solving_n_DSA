#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s=0;
    int i=0;
    while(i<32){
    if((n & (1<<i))!=0){
      s+=1;
    }
    i++;
    }
    cout<<s;
    return 0;
}