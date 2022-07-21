#include<iostream>
#include<stack>
using namespace std;

class queue{
 stack<int> s1;
 stack<int> s2;
public:
void enqueue(int v){
     s1.push(v);
}
void dequeue(){
    if(s1.empty() && s2.empty()){
        cout<<"empty queue";
        return;
    }
    if(s2.empty()){
    while(!s1.empty()){
        int s= s1.top();
        s1.pop();
        s2.push(s);
    }
 cout<<s2.top()<<endl;
 s2.pop();
 return;
    }
    else{
        cout<<s2.top()<<endl;
        s2.pop();
    }
return;
}
};

int main(){
    queue q;
    for( int i=0; i<4;i++){
        q.enqueue(i);
    }
    q.dequeue();
    q.dequeue();
    q.enqueue(5);
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
}



