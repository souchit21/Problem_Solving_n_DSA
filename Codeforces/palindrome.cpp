#include<iostream>
#include<string>
using namespace std;
bool chkpalindrome(string* str){
    string  s = *str;
    int n=s.length(); 
    int count = 0;
    for(int i=0; i<n/2; i++){
     if(s[i]==s[n-1-i]){
      count++;
      if(count==n/2){
          return 1;
      }
     }
     else{
         break;
     }
    }
    return 0;
}
int  ersncheck(string* str){
    string s =*str;
    int n = s.length();
    int count=0;
    if(n==2){
        return 2;
    }
    for(int j=0; j<n; j++){
        string s1 = s;
        s1.erase(j,1);
        if(chkpalindrome(&s1)){
            count++;
        }
    }
    return count;
}
int main(){
    int tc;
    cin>>tc;
    int arr[tc];
    int c = tc;
    int j=0;
    while(tc>0){
    int n;
    cin>>n;
    string str;
    cin>>str;
    arr[j]=ersncheck(&str);
    j++;
    tc--;
    }
    for( int i=0; i<c; i++){
        cout<<arr[i]<<endl;
    }
return 0;
}