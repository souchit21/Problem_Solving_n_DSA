#include<iostream>
#include <string>
using namespace std;
int find(string s, char d){
    for(int i=0; i<s.length(); i++){
      if(s[i]== d){
        return i;
      }
    }
    return -1;
}
string longestPalindrome(string s){
    int n = s.length();
    for(int i=0; i<n; i++){
        int j = find(s, s[i]);
        if(j!=-1){
            int l = j-i + 1;
        for(int k=i; k <= (j+i)/2; k++){
            if(s[k]==s[l-k-1]){
                continue;
            }
            else break;
        }
        return ;
        }
        else continue;
    }
}


int main(){
    string s;
    cin>>s;
    cout<<longestPalindrome(s);
}