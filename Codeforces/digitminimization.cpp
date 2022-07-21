#include<bits/stdc++.h>
//#include<iostream>
//#include<string>
using namespace std;
int po(int x, int p){
    int X =1;
    while(p>0){
        X= X*x;
        p--;
    }
    return X;
}
int main(){
    int tc;
    cin>>tc;
    int count = tc;
    int min[tc];
    int j=0;
    while(tc>0){
    int n;
    cin>>n;
    string s= to_string(n);
    if(s.length()==2){
        int a = stoi(s);
        int m =a%10;
        min[j]=m;
    }
    else{
        sort(s.begin(),s.end());
        int l =s.length();
        int k = stoi(s);
        min[j] = k/(po(10,l-1));
    }
    tc--;
    j++;
}
for( int i=0; i<count ; i++){
    cout<<min[i]<<endl;
}
return 0;

}