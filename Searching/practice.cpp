#include<iostream>
#include<cmath>
using namespace std;

int diagonalDifference( int n, int arr[n][n]){
    int s1=0;
    int s2=0;
    for(int i=0; i<n; i++){
        s1+=arr[i][i];
    }
    for(int i=0; i<n; i++){
        s2+=arr[i][n-1-i];
    }
    return abs(s1-s2);
}
int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){
        a[i][j];
        }
    }
 cout<<diagonalDifference(n, a);
}
