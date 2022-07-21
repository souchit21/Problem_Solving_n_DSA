#include<iostream>
#include<string>
using namespace std;
string convrt(string* str, int i){
    string s= *str;
    int n= s.length();
    if(i<n-2){
        if(s[i]=='p'&& s[i+1]=='i'){
          s.erase(i, 2);
          s.insert(i,"3.14");
           return  convrt(&s,i+1);
        }
        else {
             return convrt(&s, i+1);
        }
    }
    else if(s[i]=='p'&& s[i+1]=='i'){
    s.erase(i, 2);
      s.insert(i, "3.14");
      return s;
    }
return s;
  
}
int main(){
    string str;
    cin>>str;
    //str.erase(0, 2);
    //str.insert(0, "3.14");
    //cout<<str;
   cout<<convrt(&str, 0);
return 0;
}