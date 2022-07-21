#include<iostream>
using namespace std;
void swap(int* ap, int* bp){
    int temp;
   temp=*ap;
   *ap=*bp;
   *bp=temp;
return;
}
int main(){
    int a,b;
    a=2;
    b=4;
    int* ap = &a;
    int* bp = &b;
    swap(ap, bp);
    cout<<a<<" "<<b;
return 0;
}