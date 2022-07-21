#include<iostream>
#include<string>
using namespace std;

int main(){
     int k;
    cin>>k;
string op[k];
int i=0;
while(i<k){
   getline(cin,op[i]);
   cin.ignore();
   i++;
}
cout<<op[0][1];
return 0;
}