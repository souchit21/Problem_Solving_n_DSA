#include<iostream>
#include<math.h>
using namespace std;

int main(){
    bool m=0;
    int arr[]={24,32,1,5,32};
    int key=55;
    for(int i=0;i<3;i++){
        if(arr[i]==key||arr[4-i]==key){
            cout<<"yes";
            m=1;
        }
    }
    if(m!=1){
        cout<<"no";
    }
    return 0;
}