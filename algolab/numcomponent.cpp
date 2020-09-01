#include<iostream>
#include<list>
using namespace std;
void search(int i,bool visited[],list<int>graph[])
{
	visited[i] = true;
	list<int>::iterator it;
	for(it=graph[i].begin();it!=graph[i].end();it++)
	{
		if(!visited[*it])
		search(*it,visited,graph);
	}
}
int dfstraversal(list<int>graph[],int v)
{
	bool* visited = new bool[v];
	for(int i=1;i<v;i++)
	visited[i] = false;
	int count=0;
	for(int i=1;i<v;i++)
	{
		if(!visited[i])
		{
			search(i,visited,graph);
			count++;
		}
	}
	return count;
}
int main()
{
    cout<<"*************\nVimlesh kumar\n171210059\n*************\n";
	cout<<"Enter no of vertices and edges of graph: ";
	int v,e,source,desti;
	cin>>v>>e;
	list<int>graph[v+1];
	cout<<"\nEnter the edges in source and destination:\n";
	for(int i=0;i<e;i++)
	{
		cin>>source>>desti;
		graph[source].push_back(desti);
		graph[desti].push_back(source);
	}
	list<int>::iterator it,it1;

	cout<<"The no of connected components are "<<dfstraversal(graph,v+1)<<endl;
	return 0;
}
