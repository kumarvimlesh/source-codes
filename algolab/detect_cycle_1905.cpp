#include <bits/stdc++.h>
using namespace std;
vector<int>graph[999];
int visited[999]={0},arr[999]={0},ans=1,node=1;
void dfs(int s)
{visited[s]=1;
	for(int i=0;i<graph[s].size();i++)
	{	if(arr[graph[s][i]]==1 && ans==1)
		{ans=0;
		node=graph[s][i];
		return;
		}
		if(visited[graph[s][i]]==0)
		{arr[graph[s][i]]=1;
		dfs(graph[s][i]);
			if(ans==1)
			arr[graph[s][i]]=0;
		}
	}
}
int main()
{
    cout<<"*************\nVimlesh kumar\n171210059\n*************\n";
    int n,m,x,y;
    cout<<"Enter the number of vertices: ";
    cin>>n;
    cout<<"Enter the number of edges : ";
    cin>>m;
	for(int i=0;i<m;i++)
	{
	    cout<<"Enter two connecting vertex of edge "<<i+1<<" : ";
	    cin>>x>>y;
	    graph[x].push_back(y);
	}
	for(int i=1;i<=n;i++)
	{
	    arr[i]=1;
		if(visited[i]==0)
		dfs(i);

		if(ans==0)
		{break;}
        arr[i]=0;
	}
	if(ans==0)
	{
	    cout<<"CYCLE\n";
		memset(visited,0,sizeof(visited));
		memset(arr,0,sizeof(arr));
		ans=1;
		arr[node]=1;
		dfs(node);
		for(int i=1;i<=n;i++)
		{
		    if(arr[i]==1)
		      cout<<i<<" ";
		}
		cout<<node<<endl;
	}
	else
	cout<<"NO CYCLE\n";
return 0;
}
