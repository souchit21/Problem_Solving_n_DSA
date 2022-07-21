#include<iostream>
using namespace std;
#define n 100
class queue{
    private:
    int* arr;
    int front;
    int back;
    public:
    queue(){
    arr = new int [n];
    front = -1;
    back = -1;
    }
void enqueue(int x){
    if(front == -1 && back == -1){
        front++;
        back++;
        arr[back]=x;
        return;
    }
    back++;
    arr[back] = x;
return;
}
void dequeue(){
    if(front == 0 && back==0){
     front--;
     back--;
     return;
    }
    front++;
return;
}
int peek(){
    return arr[front];
}
};
int main(){
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.dequeue();
    cout<<q.peek();

}
