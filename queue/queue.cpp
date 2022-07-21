#include<iostream>
#include<stack>
using namespace std;

class queue{
 stack<int> s1;
public:
void enqueue(int v){
     s1.push(v);
     return;
}
int dequeue(){
    if(s1.empty()){
        return -1;
    }
    int s  = s1.top();
    s1.pop();
    if(!s1.empty()){
      return dequeue(); 
    }
    return s;
}
};

int main(){
    queue q;
    for( int i=0; i<4;i++){
        q.enqueue(i);
    }
    q.enqueue(5);
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
return 0;
}



