#include<iostream>
using namespace std;

int climbStairs(int n){
  int arr[n+1];
      arr[n] = 1;
      arr[n-1] = 1;
      for(int i=n-2; i>=0; i--){
       arr[i] = arr[i+1] + arr[i+2];
      }
    return arr[0];
  
}
int main(){
    int n;
    cin>>n;
    cout<<climbStairs(n);
}
