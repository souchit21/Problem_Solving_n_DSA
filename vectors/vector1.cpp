#include<iostream>
#include<cmath>
#include<cstdlib>
#include<vector>
using namespace std;

int diagonalDifference(vector<vector<int>> arr){
    int s1=0;
    int s2=0;
    int n=arr.size();
    for(int i=0; i<n; i++){
        s1+=arr[i][i];
    }
    for(int i=0; i<n; i++){
        s2+=arr[i][n-1-i];
    }

    if(s1-s2>0){
        return s1-s2;
    }
    else return s2-s1;

    
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> a ;
    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){
        int c;
        cin>>c;
        a[i].push_back(c);
        }
    }
    cout<<a[1][0];
 cout<<diagonalDifference(a);
 return 0;
}