#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p1,p2,g1,g2;
    cin>>n;
    int p[(n*(n-1))/2],d[(n*(n-1))/2];
    int pc[(n*(n-1))/2],dc[(n*(n-1))/2];
    for(int i=1;i<=(n*(n-1))/2;i++)
    {
       cin>>p1>>p2>>g1>>g2;
       p[p1]+=g1;
       p[p2]+=g2;
       if(g1>g2)
        d[i]=g1-g2;
       else
        d[i]=g2-g1;
    }
    for(int i=1;i<=(n*(n-1))/2;i++)
        {
            pc[i]=p[i];
            dc[i]=dc[i];
        }
    sort(p,p+(n*(n-1)/2));
    sort(d,d+(n*(n-1))/2);
    for(int i=n;i>=n/2;i--)
    {
        for(int j=1;j<=(n*(n-1))/2;j++)
        {
            if(p[i]=pc[j])
               cout<<j<<"\n";
        }
    }
    return 0;
}
