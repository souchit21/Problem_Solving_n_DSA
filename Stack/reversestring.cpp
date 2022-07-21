#include<iostream>
#include<string>
using namespace std;
#define n 100
class stack{
   private:
   string* arr;
   int top =-1;

   public:
   stack(){
       arr = new string[n];
       top=-1;
   }
void push(string a){
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
    cout<<arr[top]<<" ";
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
    s.push("My");
    s.push("friend");
    s.push("is");
    s.push("Sneha");
    s.push("Rani");
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();

}