#include<iostream>
#include<string>
using namespace std;

string reverse(string* str, int i){
    string s= *str;
    int n=s.length();
    if(i<n/2){
    
    char temp;
    temp=s[i];
    s[i]= s[n-1-i];
    s[n-1-i]= temp;
    return reverse(&s, i+1);
    }
    else
    return s;
}
int main(){
    string str;
    cin>>str;
   
    cout<<reverse(&str, 0);

}