#include<iostream>
#include<math.h>
using namespace std;
int sum(int n){
    int s=0;
    for(int i=1;i<=n;i++){
        s+=i;
    }
    return s;
}
int main(){
    cout<<sum(10);
    return 0;
}