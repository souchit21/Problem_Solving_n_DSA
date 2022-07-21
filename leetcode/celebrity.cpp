#include<iostream>
#include<vector>
using namespace std;
int celebrity(vector<vector<int> >& M, int n){
        // code here 
        int count =0;
        int p;
        for(int i=0; i<n; i++){
            for(int j=0; i<n; j++){
               if(M[i][j]==0){
                   count++;
                   continue;
               } 
               else break;
            }
            if(count == n){
                p = i;
                break;
            }
            count=0;
        }
        int s= 0;
        for(int k=0; k<n; k++){
            if(k!=p){
                if(M[k][p]==1){
                    s++;
                }
            }
        }
        if(s==n-1){
            return 1;
        }
        return -1;
}
int main(){
    int n;
    cin>>n;
   vector<vector<int>> M;
   for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
    int temp;
    cin>>temp;
    M[i].push_back(temp);
    }
   }
   celebrity(M, n);
}