#include<bits/stdc++.h>
using namespace std;
void bellman(int graph[][3],int V, int E,int src){
	int dis[V] ;
	for(int i =0 ; i<V; i++)
		dis[i] = INT_MAX ;
	dis[src]=0;
	for (int i = 0; i < V - 1; ++i)
	{
		for (int j = 0; j < E; ++j)
		{
		     if (dis[graph[j][0]] + graph[j][2] < dis[graph[j][1]])
		     {
		     	dis[graph[j][1]] = dis[graph[j][0]] + graph[j][2];
		     }
		}
	
	}
	for (int i = 0; i < V; ++i)
	{
		if ((dis[graph[i][0]]!=INT_MAX) && dis[graph[i][0]] + graph[i][2] < dis[graph[i][1]]) 
		{
			cout<<"negATIVE PRESENT"<<endl;

		}
	}
    for (int i = 0; i < V; ++i)
    {
    	cout<<"vertex"<<" "<<i<<"distance is"<<" "<<dis[i]<<endl;
    }
}
int main(){
    int V = 5 ;
    int E = 8 ;
    int graph[][3] = { { 0, 1, -1 }, { 0, 2, 4 }, 
                       { 1, 2, 3 }, { 1, 3, 2 },  
                       { 1, 4, 2 }, { 3, 2, 5 },  
                       { 3, 1, 1 }, { 4, 3, -3 } };
    bellman(graph,V,E,0);
}
