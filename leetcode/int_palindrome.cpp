#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool isPalindrome(int x){
       string s = to_string(x);
       int n = s.length();
       for(int i=0; i<s.length()/2; i++){
          if(s[i]!=s[n-1-i]){
              return false;
          }
       }
       return true;
}
bool palindrome(int x){
    vector<int> a;
    while(x!=0){
        a.push_back(x%10);
        x = x/10;
    }
    int n = a.size();
    for(int i=0; i<a.size()/2; i++){
          if(a[i]!=a[n-1-i]){
              return false;
          }
       }
       return true;
}
int main(){
    int x;
    cin>>x;
    cout<<palindrome(x);
}