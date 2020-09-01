#include<bits/stdc++.h>
using namespace std;
int main()
{
    #define int long long int
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n+1][m+1];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        int s=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int k=1;
                int h=0,v=0;
                s++;
                while(((i+k)<n)&&((i-k)>=0)&&((j+k)<m)&&((j-k)>=0))
                {
                    if(a[i+k][j]==a[i-k][j])
                    {
                        v++;
                    }
                    else
                    {
                        break;
                    }
                    if(a[i][j+k]==a[i][j-k])
                    {
                        h++;
                    }
                    else
                    {
                        break;
                    }
                    k++;
                }
                s+=min(v,h);
            }
        }
        cout<<s<<endl;
    }
}
