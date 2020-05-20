#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<pair<int,int>>adj[],int u ,int v,int w){
	adj[u].push_back(make_pair(v,w));
	adj[v].push_back(make_pair(u,w));
}
void dfs(vector<pair<int,int>>adj[],int V){
	int i,j;
	for( int u=0 ; u<V ;u++ ){
		cout<<u<<"makes";
		for(auto it =adj[u].begin() ; it!=adj[u].end() ;it++){
			i=it->first;
			j=it->second;
			cout<<i<<"with"<<" "<<j<<"\n";
		}
		cout<<"\n";
	}
}
			
int main(){
	int V = 5;
	vector<pair<int,int>>adj[V];
	addEdge(adj, 0, 1, 10); 
    addEdge(adj, 0, 4, 20); 
    addEdge(adj, 1, 2, 30); 
    addEdge(adj, 1, 3, 40); 
    addEdge(adj, 1, 4, 50); 
    addEdge(adj, 2, 3, 60); 
    addEdge(adj, 3, 4, 70); 
    dfs(adj,V);
    return 0;
}
