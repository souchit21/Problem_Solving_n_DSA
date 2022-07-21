#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    int q;
    cin>>q;
    int k;
    
    int a[n][10];
    for(int i=0; i<n;i++){
    
        cin>>k;
    
        for(int j=0;j<k;j++){
            cin>>a[i][j];
        }
        
    }
    int m[q];
    int t[q];
    for(int j=0;j<q;j++){
        cin>>m[j]>>t[j];
    }
        for(int j=0;j<q;j++){
        cout<<a[m[j]][t[j]]<<endl;
    }
    
     
    return 0;
}