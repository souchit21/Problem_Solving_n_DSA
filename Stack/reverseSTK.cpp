#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int> &st, int temp){
       if(st.empty()){
           st.push(temp);
           return;
       }
       

}
void reverse(stack<int> &st){
    if(st.size()==0){
    return;
    }

    int temp = st.top();
    st.pop();
    reverse(st);
    insertatbottom(st, temp);
}


int main(){
    stack<int> n1;
    for(int i=0; i<6;i++){
        n1.push(i);
    }
    reverse(n1);
    for(int i=0; i<6;i++){
       cout<<n1.top()<<endl;
   }
}