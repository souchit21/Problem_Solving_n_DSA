#include <bits/stdc++.h>

using namespace std;
#define N 200001 
class Stack{
    int arr[N];
    int top=-1;
    public:
    void push(int m){
        // if(top!=n-1){
        top++;
        arr[top]=m;
        // }
        // else{
        //     cout<<"StackOverflow";
        // }
        if(top!=-1){
        cout<<arr[top]<<endl;
        }
    }
    void pop(){
        top--;
        if(top!=-1){
           cout<<arr[top]<<endl;
        }
        else {
            cout<<"EMPTY"<<endl;
        }
    }
    void inc(int i, int v){
        for(int j=0;j<i;j++){
            arr[j]+=v;
        }
        if(top!=-1){
            cout<<arr[top]<<endl;
        }
        else{
            cout<<"EMPTY";
        }
    }
    void superStack(vector<vector<string>> operations, int m){
        for(int i=0;i<m;i++){
             if(operations[i][0]=="push"){
                 push(stoi(operations[i][1]));
             }
            else if(operations[i][0]=="pop"){
                pop();
            }
            else if(operations[i][0]=="inc"){
                inc(stoi(operations[i][1]),stoi(operations[i][2]));
            }
            
        }
        
    }
    
};
int main(){
    Stack stack1;
    int n; 
    cin>>n; 
    vector<vector<string>> operations(n, vector<string>(3));
    for(int i=0; i<n; i++){
        string trigger, in1, in2; 
        cin>>trigger;
        operations[i][0]=trigger;
        if(trigger=="push"){
            cin>>in1;
            operations[i][1]=in1;
        }
        else if(trigger=="pop"){
            // do the necessary action 
        }
        else if(trigger=="inc"){
            cin>>in1>>in2;
            operations[i][1]=in1;
            operations[i][2]=in2;
        }
    }
    stack1.superStack(operations,n);


    return 0;
}
