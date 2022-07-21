#include<iostream>
#include<stack>
#include<vector>
#include<set>
#include<iterator>
#include<string>
using namespace std;
int lengthOfLongestSubstring(string s){
    int n = s.length();
    set<int> l;
    int m;
    int j =0;
    set<char> st;
    for(int i=0; i<n; i++){
        if(i == 0){
            st.insert(s[0]);
        }
        else{
            m = st.size();
         st.insert(s[i]);

        if(m==st.size()){
          l.insert();
          i--;
        }
    }
    }
    set<int>::iterator itr;
    itr = l.begin();
    return *itr;
}
int main(){
    string s;
    cin>>s;
    //cout<<lengthOfLongestSubstring(s);
    set<char> st;
    st.insert('a');
    st.insert('b');
    st.insert('a');
    set<char>::iterator itr;
    itr = st.begin();
   // cout<<*itr;
   cout<<st.size()<<endl;
    vector<set<char>> stk;
    stk[0].insert('a');
    stk[0].insert('B');
     stk[0].insert('c');
     cout<<stk[0].size();


}