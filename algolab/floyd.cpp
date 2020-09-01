#include<iostream>
using namespace std;
int minval(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}
int main()
{
    int i,j,k,e,v;
    cout<<"Enter the number of edge and vertex in the graph : ";
    cin>>e>>v;
    int A[v+1][v][v];
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            if(i==j)
                A[0][i][j]=0;
            else
                A[0][i][j]=999999;
        }
    }
    for(int i=0;i<e;i++)
    {
        int s=0,d=0,w=0;
        cout<<"enter the source and destination for edge "<<i+1<<" and its weight : ";
        cin>>s>>d>>w;
        A[0][s-1][d-1]=w;
    }
    for(int k=1;k<=v;k++)
    {
        for(i=0;i<v;i++)
        {
            for(j=0;j<v;j++)
            {

                    A[k][i][j]=minval(A[k-1][i][j],A[k-1][i][k]+A[k-1][k][j]);

            }
        }
    }
    for(int k=0;k<=v;k++)
    {
        cout<<"A("<<k<<") :\n" ;
        for(i=0;i<v;i++)
        {
            for(j=0;j<v;j++)
            {
                cout<<A[k][i][j];
                if(A[k][i][j]==99999999)
                    cout<<"    ";
                else
                    cout<<"           ";
            }
            cout<<"\n\n";
        }
        cout<<"\n\n\n";
    }
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            cout<<"Distance from vertex "<<i+1<<" to vertex "<<j+1<<" is : ";
            cout<<A[v-1][i][j]<<"\n";
        }
    }
}
