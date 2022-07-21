#include<iostream>
#include<string>
#include<string.h>
using  namespace std;
string check(string str, int i){
    int n= str.length();
    if(i+3 <= n-1 || i+2 == n-1){
    if(str.substr(i,3)=="aaa"){
        if(str[i+3]=='a'&& str[i+4]!='a'){
            return check(str, i+4);
        }
        return check(str, i+3);
    }
    if(str.substr(i,3)=="bbb"){
        if(str[i+3]=='b' && str[i+4] != 'b'){
            return check(str, i+4);
        }
        return check(str, i+3);
    
    }
    }
    if(i+2 <= n-1 || i+1==n-1){
     if(str.substr(i, 2)=="aa" || str.substr(i, 2)=="bb"){
       return check(str, i+2);
    }
    else return "No";
    }
    if(i==n-1){
        if(n!=1){
            if( str[n-2] != str[n-1]){
            return "No";
        }
        else{
        return "Yes";
        }
        }
    }
    else {
        if(i<n-1){
         return "No";
    }
    return "Yes";
    }
   // else if(str.substr(i, 2)=="bb"){
       // return check(str, i+2);
    //}
    return "No";
}
int main(){
    int tc;
    cin>>tc;
    int count = tc;
    string yon[tc];
    int j=0;
    while(tc>0){
        
        string s;
        cin>>s;
        yon[j]=check(s,0);
        tc--;
        j++;
    }
for(int i=0; i<count ; i++){
 cout<<yon[i]<<endl;
}

return 0;
}