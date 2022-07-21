#include<iostream>
#include<math.h>
using namespace std;
int max(int a, int b, int c){
    int maxi;
    if(a>b){
        if(a>c)
        maxi=a;
    }
    else if(b>c) maxi=b;
    else if(b<c) maxi=c;
    return maxi;
}
bool ptriplet(int a, int b, int c){
    bool m=0;
    if(max(a,b,c)==a){
        if(pow(a,2)==pow(b,2)+pow(c,2))
        m=1;
        return m;
        
    }
       if(max(a,b,c)==b){
        if(pow(b,2)==pow(a,2)+pow(c,2))
        m=1;
        return m;
        }
    
       if(max(a,b,c)==c){
        if(pow(c,2)==pow(b,2)+pow(a,2))
        m=1;
        return m;
        }
    


}
int main(){
  cout<<max(5,3,4)<<" "<<ptriplet(5,3,4);
  return 0;
}