#include<iostream>
using namespace std;
 void swap(int* a, int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return ;
    
}

int main(){
    int a,b;
    cin>>a>>b;
    int* aptr;
    int* bptr;
    aptr=&a;
    bptr=&b;
    swap(aptr,bptr);
    cout<<a<<endl<<b;
    return 0;

}