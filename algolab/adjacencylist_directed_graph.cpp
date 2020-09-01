#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int e,v,s,d;
    vector<int>::iterator it;
    cout<<"enter the number of vertex and edges of graph : ";
    cin>>v>>e;
    vector<int> graph[v];
    for(int i=0;i<v;i++)
    {
        graph[i].push_back(i);
    }
    for(int i=0;i<e;i++)
    {
        cout<<"Enter source and destination of edge "<<i+1<<" : ";
        cin>>s>>d;
        graph[s].push_back(d);
    }
    for(int i=0;i<v;i++)
    {
        for(it=graph[i].begin();it<graph[i].end();it++)
        {
            if(it+1<graph[i].end())
              cout<<*it<<"->";
            else
              cout<<*it;
        }
        cout<<"\n";
    }
    return 0;
}
