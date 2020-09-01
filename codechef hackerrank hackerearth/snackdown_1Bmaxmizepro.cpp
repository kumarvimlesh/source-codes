#include<bits/stdc++.h>
using namespace std;
int rec(int r,int s)
{
    return(r-2*(s-1));
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i,product=1;
        cin>>n>>k;
        int a[k];
        int r=n;
        int s=k;
        for(i=1;i<=k;i++)
        {
           a[i]=rec(r,s);
           r-=a[i];
           s--;
           //cout<<a[i];
        }
        for(i=1;i<=k;i++)
        {
            product*=((a[i]*a[i])-a[i]);
        }
        cout<<product%1000000007<<endl;
    }
}
