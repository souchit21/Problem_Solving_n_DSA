#include<bits/stdc++.h>
using namespace std;

void show(vector<int>R,int m){
    for(int i=0;i<m;i++){
        cout<<R[i]<<endl;
    }
    return;
}
int main(){
  
  vector<int>Rolls(4);
  for(int i=0;i<4;i++){
      cin>>Rolls[i];
  }
  show(Rolls,4);
return 0;
}