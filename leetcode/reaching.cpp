#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
vector<int> reaching_height(int n, int a[]) {
    vector<int> v;
    for(int i=0; i<n; i++){
        v.push_back(a[i]);
    }
    sort(v.begin(), v.end());
    stack<int> stk;
    int k=0;
    while(k<v.size()){
        stk.push(v[k]);
        k++;
    }
    int sum1 = 0;
    int sum2 = 0;
    for(int i=0; i<n; i=i+2){
        v[i] = stk.top();
        stk.pop();
        sum1 = sum1 + v[i];
    }
    stack<int> s;
    while(!stk.empty()){
        s.push(stk.top());
        stk.pop();
    }
    for(int i=1; i<n; i=i+2){
        v[i] = s.top();
        s.pop();
        sum2 = sum2 + v[i];
    }
    if(sum1 == sum2){
        vector<int> a;
        a.push_back(-1);
        cout<<"Not Possible";
        return a;
    }
    return v;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
   vector<int> v = reaching_height(n, arr);
   int m = v.size();
   if(m!=1){
   for(int i=0; i<m; i++){
    cout<<v[i]<<" ";
   }
   }
}