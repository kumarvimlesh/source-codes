#include<iostream>
using namespace std;
int main()
{
    cout<<"*************\nVimlesh kumar\n171210059\n*************\n";
	cout<<"Enter no of vertices and edges of graph: ";
	int v,e,source,desti;
	cin>>v>>e;
	int graph[v][v];
	for(int i=1;i<=v;i++)
	{
		for(int j=1;j<=v;j++)
		graph[i][j]=0;
	}
	for(int i=1;i<=e;i++)
	{
	    cout<<"\nEnter the source and destination for edge"<<i<<" : ";
		cin>>source>>desti;
		graph[source][desti] = 1;
		graph[desti][source] = 1;
	}
	cout<<"\nThe adjacency matrix is :\n";
	for(int i=1;i<=v;i++)
	{
		for(int j=1;j<=v;j++)
		cout<<graph[i][j]<<" ";
		cout<<"\n";
	}
	return 0;
}
