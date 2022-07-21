#include<bits/stdc++.h>
//#include<string>
//#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    string s[t];
    int n[t];
   for( int j=0; j<t; j++){
       cin>>n[j]>>s[j];
   }
   for(int j=0; j<t; j++){
    int m=0;
    int i=0;
    int count=0;
    while(i<n[j]-1){
        if(s[j][i]==s[j][i+1]){
        m++;
        
        
        }
        else if(m%2==0){
            s[j][i+1]=s[j][i];
            count++;
            i++;
            m=0;
        }
        else if(m%2!=0 && s[j][i]!=s[j][i+1]){
            m=0;
        }

    i++;
    }
    cout<<count<<endl;
   }


}