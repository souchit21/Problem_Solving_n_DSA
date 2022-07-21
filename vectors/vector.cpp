#include <bits/stdc++.h>
using namespace std; 

void superStack(stack<int> s, vector<vector<string>> operations, int n ){
    for(int i=0; i<n; i++){
        if(operations[i][0]=="push"){
            s.push(stoi(operations[i][1]));
        }
        else if(operations[i][0]=="pop"){
            s.pop();
        }
        else if(operations[i][0]=="inc"){
            auto it = s.begin();
            for(int j=0; j<operations[j][1]; j++){

            }
        }
    }
}
int main(){
    vector<int> st; 
    int n; cin>>n;

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
    for(auto ele: operations){
        cout<<ele[0]<<ele[1]<<ele[2]<<endl;
    }

}





