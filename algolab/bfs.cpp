#include<iostream>
#include<list>
using namespace std;
class Graph
{
    int V;
    list<int> *adj;
    void BFSUtil(int v, bool visited[]);
public:
    Graph(int V);
   void addEdge(int v, int w);
    void BFS(int v);
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}

void Graph::BFSUtil(int v, bool visited[])
{   list<int>queue;
    visited[v] = true;
    queue.push_back(v);
    list<int>::iterator i;
    while(!queue.empty())
    { v=queue.front();
      cout << v << " ";
      queue.pop_front();
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
      { if (!visited[*i])
        { visited[*i] = true;
          queue.push_back(*i);
        }
     }}
}
void Graph::BFS(int v)
{
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;
    BFSUtil(v, visited);
}
int main()
{
cout<<"*************\nVimlesh kumar\n171210059\n*************\n";
int n,e,v,w;
    cout<<"enter vertex and edges : ";
    cin>>n>>e;
    Graph g(n);
    for(int i=0;i<e;i++)
    {
        cout<<"enter the source and destination for edge "<<i+1<<" : ";
    	cin>>v>>w;
    	g.addEdge(v,w);
	}
	for(int i=0;i<n;i++)
	{   cout << "\nFollowing is breadth First Traversal starting from vertex i="<<i<<"\n";
           g.BFS(i);
	}

    return 0;
}
