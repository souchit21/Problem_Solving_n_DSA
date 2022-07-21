#include<iostream>
#include<cstdlib>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
     cin>>tc;
     int c = tc;
     int arr[tc][2];
     int l=0;
     while(tc>0){
    vector<pair<int, int>> v;
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        v.push_back(make_pair(a[i],i));
    }
    sort(v.begin(), v.end());
    arr[l][0] = v[0].second;
    arr[l][1] = v[n-1].second;
tc--;
l++;

}
for( int j=0; j<c; j++){
    cout<<arr[j][0]+1<<" "<<arr[j][1]+1<<endl;
}

}