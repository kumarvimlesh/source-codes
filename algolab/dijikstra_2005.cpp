#include<bits/stdc++.h>
#define vs 6
using namespace std;
int minimumDist(int dist[], bool Dset[],int n)
{
	int min=INT_MAX,index;
	for(int v=0;v<n;v++)
	{
		if(Dset[v]==false && dist[v]<=min)
		{
			min=dist[v];
			index=v;
		}
	}
	return index;
}
void dijkstra(int graph[6][vs],int src,int n)
{	int dist[n];
	bool Dset[n];
	for(int i=0;i<n;i++)
	{		dist[i]=INT_MAX;
		Dset[i]=false;
	}
	dist[src]=0;
	for(int c=0;c<n;c++)
	{	int u=minimumDist(dist,Dset,n);
		Dset[u]=true;
		for(int v=0;v<n;v++)
	{if(!Dset[v] && graph[u][v] && dist[u]!=INT_MAX && dist[u]+graph[u][v]<dist[v])
			dist[v]=dist[u]+graph[u][v];
		}
	}
	cout<<"Vertex\t\tDistance from source"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<i+1<<"\t\t"<<dist[i]<<endl;
	}
}
int main()
{
    cout<<"*************\nVimlesh kumar\n171210059\n*************\n";
    int n,e,x,y,w;
	cout<<"Enter number of vertices\n";
	cin>>n;
	cout<<"Enter the number of edges\n";
	cin>>e;
	int graph[vs][vs];
	for(int i=0;i<n;i++)
	{for(int j=0;j<n;j++)
		graph[i][j]=0;
	}
	cout<<"Enter vertex1, vertex2, weight\n";
	for(int i=0;i<e;i++)
	{	cin>>x>>y>>w;
		graph[x-1][y-1]=w;
		graph[y-1][x-1]=w;
	}
	dijkstra(graph,0,n);
	return 0;
}
