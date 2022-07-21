#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void addEdge(vector<vector<int>> &adj, int u, int v){
       adj[u].push_back(v);
       adj[v].push_back(u);
       return;
}
void BFS(vector<vector<int>> &adj,int V,int s){
    queue<int> q;
    q.push(s);
    bool t[V];
    for(int i=0; i<V; i++){
        t[i] = 0;
    }
    t[s] = 1;
    while(!q.empty()){
        int a = q.front();
        cout<<q.front()<<" ";
        q.pop();
       int k= 0;
       while(k<adj[a].size()){
        if(t[adj[a][k]]==0){
            t[adj[a][k]] = 1;
            q.push(adj[a][k]);
        }
        k++;
       }
    }
return;
}

int main(){
    int V = 5;
vector<vector<int>> adj(V);

addEdge(adj,0,1);
addEdge(adj,0,2);
addEdge(adj,1,2);
addEdge(adj,1,3);
addEdge(adj,2,3);
addEdge(adj,3,4);
addEdge(adj,4,0);
BFS(adj, 5, 0);
//cout<<adj[0].size();

}
