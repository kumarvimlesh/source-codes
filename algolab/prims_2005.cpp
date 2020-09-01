#include<bits/stdc++.h>
using namespace std;
int i,j,k,n,stk[10],top,v,visit[10],visited[10],u,cost[10][10];
int main()
{
    cout<<"*************\nVimlesh kumar\n171210059\n*************\n";
    int m,c;
	cout <<"Enter no of vertices : ";
	cin >> n;
	cout <<"Enter no of edges : ";
	cin >> m;
	cout <<"\nEnter Vertex1, vertex2 and Cost\n";
	for(k=1;k<=m;k++)
	{	cin >>i>>j>>c;
		cost[i][j]=c;
	}
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
if(cost[i][j]==0)
	cost[i][j]=9999;
cout <<"Order of visited vertices\n";
	k=1;
	while(k<n)
	{m=9999;
		if(k==1)
		{for(i=1;i<=n;i++)
			for(j=1;j<=m;j++)
			if(cost[i][j]<m)
			{
					m=cost[i][j];
					u=i;
				}
		}
		else
		{	for(j=n;j>=1;j--)
			if(cost[v][j]<m && visited[j]!=1 && visit[j]!=1)
			{	visit[j]=1;
				stk[top]=j;
				top++;
				m=cost[v][j];
				u=j;
			}
		}
		cost[v][u]=9999;
		v=u;
		cout<<v << " ";
		k++;
		visit[v]=0; visited[v]=1;
	}
}
