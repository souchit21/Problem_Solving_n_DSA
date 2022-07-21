#include<iostream>
#include<string>
using namespace std;

string movex(string* str, int i){
    string s= *str;
    int n= s.length();
    if(i<n-2){
    if(s[i]=='x'){
        s.erase(i,1);
        s.insert(n-1,"x");
        i--;
        return movex(&s, i++ );
    }
    else{
        return movex(&s, i++ );
    }
    }
    if(i==n-1){
    return s;
    }
    return s;
}
int main(){
    string str;
    cin>>str;
    int n=str.length();
    cout<<str.length()<<endl;
    str.erase(0,1);
    cout<<str.length()<<endl;
    str.insert(n-1,"x");
    cout<<str;
    //cout<<movex(&str, 0);
}