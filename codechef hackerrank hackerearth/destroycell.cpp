#include<bits/stdc++.h>
using namespace std;
int a[1003][1003];
void reset(int n,int m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            a[i][j]=0;
        }
    }
}
void print(int n,int m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,rep;
        cin>>n>>m;
        for(int k=0; k<n*m; k++)
        {
            rep=0;
            reset(n,m);
            int coun=0;
            for(int i=0; i<n; i++)
            {
                for(int j=((k+1)-(i*n)%(k+1))%(k+1); j<m; j++)
                {
                    if(coun%(k+1)==0)
                    {
                        a[i][j]=1;
                        j=j+k;
                    }
                    coun++;
                }
            }
            coun=0;
            for(int i=0; i<m; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if(coun%(k+1)==0)
                        if(a[j][i]==1)
                            rep++;
                    coun++;
                }
            }
            // cout<<endl;
            int tot=(n*m+k)/(k+1);
            // cout<<"k :"<<k<<" tot:"<<tot<<" rep:"<<rep<<endl<<endl;
            // print(n,m);
            //cout<<endl;
            cout<<2*tot-rep<<" ";

        }
        cout<<endl;
    }
}
