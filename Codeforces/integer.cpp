#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    int count = t;
    int arr[t];
    int j=0;
    while(t>0){
        int x,y;
        cin>>x>>y;
        if(x==0 && y==0){
            arr[j]=0;
        }
        else{
        float s = sqrt(x*x + y*y);
        int s1 = s;
        s=s-s1;
        if(s!=0){
            arr[j] = 2;
        }
        else{
            arr[j] = 1;
        }
        }
    t--;
    j++;
    }
    for( int i=0; i<count; i++){
        cout<<arr[i]<<endl;
    }
    
}