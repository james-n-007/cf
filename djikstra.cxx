#include<bits/stdc++.h>
using namespace std;
# define INF 0x3f3f3f3f
typedef pair<int,int> ipair ;
void addEdge(vector<pair<int,int>>adj[],int u ,int v,int w){
	adj[u].push_back(make_pair(v,w));
	adj[v].push_back(make_pair(u,w));
}
void shortdis(vector<pair<int,int>>adj[],int V,int src){
	priority_queue<ipair,vector<ipair>,greater<ipair>> pq;
	vector<int> dis(V,INF);
	pq.push(make_pair(0,src));
	dis[src]=0;
	while(!pq.empty()){
		int i = pq.top().second;
		pq.pop();
		for (auto x : adj[i])
		{
			int a = x.first;
			int b = x.second;
			if (dis[a]>dis[i]+b)
			{
				dis[a]=dis[i]+b;
				/* code */
				pq.push(make_pair(dis[a],a));

			}
		}
	}
	for(int c =0 ; c< V; c++){
	    cout<<"vertex distance of"<<c<<":"<<"is"<<dis[c]<<endl;
	}
}
int main(){
	int V = 9;
	vector<ipair> adj[V];
	addEdge(adj, 0, 1, 4); 
    addEdge(adj, 0, 7, 8); 
    addEdge(adj, 1, 2, 8); 
    addEdge(adj, 1, 7, 11); 
    addEdge(adj, 2, 3, 7); 
    addEdge(adj, 2, 8, 2); 
    addEdge(adj, 2, 5, 4); 
    addEdge(adj, 3, 4, 9); 
    addEdge(adj, 3, 5, 14); 
    addEdge(adj, 4, 5, 10); 
    addEdge(adj, 5, 6, 2); 
    addEdge(adj, 6, 7, 1); 
    addEdge(adj, 6, 8, 6); 
    addEdge(adj, 7, 8, 7);
    shortdis(adj,V,0); 
}
