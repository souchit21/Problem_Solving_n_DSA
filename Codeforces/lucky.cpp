#include<iostream>
#include<string>
#include<cmath>
using namespace std;
//creating function to check sum of first three numbers is equa to last three numbers
 bool check(int a[], int n){
     int s1 = 0;
     for( int i=0; i<3; i++){
         s1=s1+a[i];
     }
     int s2 = 0;
     for( int i=0; i<3; i++){
         s2=s2+a[n-1-i];
     }
     if(s1==s2){
         return 1;
     }
     else return 0;
 }
 int power( int x, int p){
     int X=1;
     for( int i=0 ; i<p; i++){
         X = X*x;
     }
     return X;
 }
int main(){
    int t;
    cin>>t;
    int count = t;
    bool m[t];
    int j=0;
    while(t>0){
        
        string s;
        cin>>s;
        int a[6];
        for( int i=0; i<6; i++){
            int b = stoi(s);
           //cout<<b<<endl;
            int c = power(10, 5-i);
            //cout<<c<<endl;
            a[i] = b/c ;
            //cout<<a[i]<<endl;
            s.erase(0,1);
            //cout<<s<<endl;
            }
            m[j] = check(a,6);
            //cout<<m[j]<<endl;

    t--;
    j++;
    }
    for( int i=0; i<count; i++){
        if(m[i]==1){
            cout<<"Yes"<<endl;
        }
        
        if(m[i]==0){
                cout<<"No"<<endl;
            }
    }
}