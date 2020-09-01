#include<iostream>
using namespace std;
int main()
{

    int n,p1,p2,g1,g2;
    cin>>n;
    int p[n],d[n],s[n],k[n],ps[n];
    p[n]={0};
    d[n]={0};
    s[n]={0};
    k[n]={0};
    for(int i=0;i<n*(n+1)/2;i++)
    {cin>>p1>>p2>>g1>>g2;
         s[p2-1]=s[p2-1]+g2;
         s[p1-1]=s[p1-1]+g1;
         k[p1-1]=k[p1-1]+g1;
         k[p1-1]=k[p1-1]+g1;

    if(g1>g2)
     {
       p[p1-1]=p[p1-1]+3;}
    else if(g2>g1)
        p[p2-1]=p[p2-1]+3;
     else
     {
         p[p1-1]=p[p1-1]+1; p[p1-1]=p[p1-1]+1; }

    }

    for(int i=0;i<n;i++)
    ps[i]=i;

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            if(p[i]>p[j])
               {swap(p[i],p[j]);
                swap(d[i],d[j]);
                swap(s[i],s[j]);
                swap(k[i],k[j]);
                swap(ps[i],ps[j]);}
         else if (p[i]==p[j])
         {
             if(d[i]>d[j])
             {swap(p[i],p[j]);
                swap(d[i],d[j]);
                swap(s[i],s[j]);
                swap(k[i],k[j]);
                swap(ps[i],ps[j]);}
             else if (d[i]==d[j])
             {
                 if(s[i]>s[j])
             {swap(p[i],p[j]);
                swap(d[i],d[j]);
                swap(s[i],s[j]);
                swap(k[i],k[j]);
                swap(ps[i],ps[j]);}
                else
                    if(ps[i]>ps[j])
                {
                    swap(p[i],p[j]);
                swap(d[i],d[j]);
                swap(s[i],s[j]);
                swap(k[i],k[j]);
                swap(ps[i],ps[j]);
                }
             }

         }

        }

        for(int i=n/2-1;i>=0;i--)
         cout<<ps[i]<<" ";

}
