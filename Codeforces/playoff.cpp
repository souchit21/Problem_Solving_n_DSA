#include<iostream>
#include<vector>
using namespace std;
//int* play(int* arr){

//}
int main(){
    int n;
    cin>>n;
    vector<int> a;
    for( int i=0; i<n; i++){
        int c;
        cin>>c;
        a.push_back(c);
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }

    


}