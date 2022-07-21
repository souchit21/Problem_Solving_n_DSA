#include<iostream>
#include<string>
 using namespace std;
 
 int main(){
     string str="wefjbweiuf";
     for(int i=0; i<str.length();i++){
         str[i]-=32;
     }
     cout<<str;
     return 0;
 }
