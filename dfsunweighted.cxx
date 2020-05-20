#include<bits/stdc++.h>
using namespace std;
void addedge(vector <int > adj[] ,int u ,int v){
adj[u].push_back(v);
adj[v].push_back(u);
}
void dfsutil(int i , vector <int> adj[] ,vector<bool>&vis)
{
	vis[i] = true;
	cout<<i;
	for(auto u = 0;u<adj[i].size();u++){
        if(vis[adj[i][u]]==false){
			dfsutil(adj[i][u],adj,vis);
		}
	}
}
void dfs(vector <int > adj[] , int V){
vector<bool>vis(V,false);
for(int i =0 ;i<V;i++){
if(vis[i] == false){
dfsutil(i,adj,vis);
}
}
}
int main(){
	int V = 5 ;
    vector< int > adj[5] ;
    addedge(adj, 0, 1); 
    addedge(adj, 0, 4);
    addedge(adj, 1, 2); 
    addedge(adj, 1, 3); 
    addedge(adj, 1, 4); 
    addedge(adj, 2, 3);
    addedge(adj, 3, 4);
    dfs(adj,V);
    return 0;
}
