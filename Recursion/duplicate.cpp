#include<iostream>
#include<string>
using namespace std;

string derase( string* str, int i){
   string s= *str;
   int n=s.length();
   if(i<n-2){
     for(int j=i+1; j<n; j++){
         if(s[i]==s[j]){
          s.erase(j, 1);
          n--;
          j--;
         }
     }
     return derase(&s, i+1);
   }
   if(i==n-2){
      if(s[i]==s[i+1]){
          s.erase(i+1, 1);
          return s;
   }
   else return s;
}
return s;
}
int main(){
    string str;
    cin>>str;
    
    cout<<derase(&str, 0);
    //cout<<str;
    
}