#include<iostream>
using namespace std;

int main(){
    string str="awjdnwejwnef";
    int s[str.length()];
    for(int i=0;i<str.length();i++){
        s[i]=0;
        for(int j=0;j<str.length();j++){
            if(i!=j){
            if(str[i]==str[j]){
            s[i]+=1;
            }
            }
        }
    }
    for(int i=0;i<str.length();i++){
        cout<<str[i]<<" "<<s[i]+1<<endl;
    }
    return 0;
}