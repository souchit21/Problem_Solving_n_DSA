#include<iostream>
#include<queue>
using namespace std;
class stack{
    queue<int> q1;
    queue<int> q2;
    int N;
  public: 
  stack(){
      N=0;
  }
  void in(int v){
    q2.push(v);
    N++;
    while(!q1.empty()){
       q2.push(q1.front());
       q1.pop();
    }
    queue<int> temp = q1;
    q1 = q2;
    q2 = temp;
  }
  void out(){
      q1.pop();
    N--;
    return;
  }
  int top(){
      return q1.front();
  }
};
int main(){
    stack q;
    for( int i=0; i<4;i++){
        q.in(i);
    }
    q.in(5);
   // q.out();
    cout<<q.top();
}