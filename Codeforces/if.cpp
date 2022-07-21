#include<iostream>
using namespace std;
int main(){
 int tc;
 cin>>tc;
 int count = tc;
 string s[tc];
 int j=0;
while (tc>0){
    
    int r;
    cin>>r;
    if(r>=1900){
        s[j] = "Division 1";
    }
    else if(r>=1600 && r<=1899){
        s[j] = "Division 2";
    }
    else if(r>=1400 && r<=1599){
        s[j] = "Division 3";
    }
    else if( r<=1399){
        s[j] = "Division 4";
    }
    tc--;
    j++;
}
for(int i=0; i<count; i++){
    cout<<s[i]<<endl;
}
return 0;
}