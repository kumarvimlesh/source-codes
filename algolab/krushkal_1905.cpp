#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int cost[10][10],i,j,k,n,m,c,visit,visited[10],l,v,count,count1,vst,p;

main()
{
    cout<<"*************\nVimlesh kumar\n171210059\n*************\n";
    int num1,num2;
    cout<<"enter no of vertices : ";
    cin >> n;
    cout <<"enter no of edges : ";
    cin >>m;
    cout <<"EDGE Cost\n";
    for(k=1;k<=m;k++)
     {
        cin >>i >>j >>c;
        cost[i][j]=c;
        cost[j][i]=c;
     }
    for(i=1;i<=n;i++)
      for(j=1;j<=n;j++)
         if(cost[i][j]==0)
           cost[i][j]=999;
         visit=1;
         while(visit<n)
         {
            v=999;
            for(i=1;i<=n;i++)
              for(j=1;j<=n;j++)
                  if(cost[i][j]!=999 && cost[i][j]<v  && cost[i][j]!=-1 )
                     {
                        int count =0;
                        for(p=1;p<=n;p++)
                        {
                            if(visited[p]==i || visited[p]==j)
                               count++;
                        }
                        if(count >= 2)
                         {
                            for(p=1;p<=n;p++)
                              if(cost[i][p]!=999 && p!=j)
                                num1=p;
                            for(p=1;p<=n;p++)
                              if(cost[j][p]!=999 && p!=i)
                                num2=p;

                             if(cost[num1][num2]==-1)
                                continue;
                         }
                        l=i;
                        k=j;
                        v=cost[i][j];
            }
    cout <<"\nedge connecting " <<l <<"-->"<<k;
    cost[l][k]=-1;
    cost[k][l]=-1;
    visit++;
    int count=0;
    count1=0;
    for(i=1;i<=n;i++)
    {
        if(visited[i]==l)
        count++;
        if(visited[i]==k)
        count1++;
    }
    if(count==0)
    visited[++vst]=l;
    if(count1==0)
    visited[++vst]=k;
  }
}

