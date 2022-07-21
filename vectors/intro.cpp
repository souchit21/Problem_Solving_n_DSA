#include<iostream>
#include<vector>
using namespace std;
 int main(){
     int n;
     cin>>n;
     vector<int> v(n);
     for( int i=0; i<n; i++){
        cin>>v[i];
     }
     
     /*v.push_back(1);
     v.push_back(2);
     v.push_back(3);*/
     
     for(int i=0;i<v.size(); i++){
         cout<<v[i]<<endl;
     }
     vector<int>::iterator it;
     for(it=v.begin(); it!=v.end(); it++){
        cout<<*it<<endl;
        
     }
    for(auto e:v){
        cout<<e;
    }
 }