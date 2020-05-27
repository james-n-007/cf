#include <bits/stdc++.h>
using namespace std;
#define V 4
#define INF 999999
void prinsol(int dis[][V]);
void floyd(int graph[][V]){
	int dis[V][V];
	for(int i =0;i<V;i++){
		for (int j = 0; j < V; j++)
		{
			dis[i][j]=graph[i][j];
			/* code */
		}
	}
	for (int k = 0; k < V; k++)
	{
		for (int i = 0; i < V; i++)
		{
			for (int j = 0; j < V; j++)
			{
				/* code */
				if (dis[i][j]>dis[i][k]+dis[k][j])
				{
					/* code */
					dis[i][j]=dis[i][k]+dis[k][j];
				}
			}
			/* code */
		}
		/* code */
	}
	prinsol(dis);
}
void prinsol(int dis[][V]){
	cout<<"distance="<<endl;
	for (int i = 0; i < V; i++)
	{
		/* code */
		for (int j = 0; i < V; j++)
		{
			/* code */
			//cout<<"shortest distance is"<<endl;
			if (dis[i][j]==INF)
			{
				/* code */
				cout<<"INF"<<endl;
			}
			else{
				cout<<dis[i][j]<<endl;
			}
		}
	}
}
int main(){
	int graph[V][V] = { {0, 5, INF, 10},  
                        {INF, 0, 3, INF},  
                        {INF, INF, 0, 1},  
                        {INF, INF, INF, 0}  
                    };  
    floyd(graph);

}
