#include<iostream>
using namespace std;
#define n 100
class stack{
   private:
   int* arr;
   int top =-1;

   public:
   stack(){
       arr = new int[n];
       top=-1;
   }
void push(int a){
    if(top==n-1){
        cout<<"not allowed";
        return;
    }
     top++;
     arr[top]=a;
     cout<<arr[top]<<endl;
     return;
   }
void pop(){
    if(top==-1){
        cout<<"Empty";
        return;
    }
    
    top--;
    cout<<arr[top]<<endl;
return;
}
void Top(){
    if(top==-1){
        cout<<"nothing";
        return;
    }
    cout<<arr[top]<<endl;
return;
}
bool empty(){
    if(top==-1){
        return 1;
    }
    else return 0;
}

};
int main(){
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.pop();
    s.Top();
    
}

