#include<iostream>
#include<math.h>
using namespace std;

bool checkp(int a){
    bool c=0;
    for (int i=a-1;i>1;i--){
        if(a%i==0){
            c=1;break;
        }
    }
    return c;
}

void print(int a, int b){
    for (int i=a+1; i<b;i++){
        if(checkp(i)==0){
            cout<<i<<" ";
        }
    }
    return;
}
int main(){
    print(1,20);
    return 0;
}
