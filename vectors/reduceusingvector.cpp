#include<iostream>
#include<vector>

using namespace std;

int main(){
     int n;
     cin>>n;
vector<pair<int, int>> v(n);
for( int i=0; i<n; i++){
    pair<int , int> p;
    cin>>p.first>>p.second;
    v.push_back(make_pair(p.first, p.second));
}



}
