#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,m,k,l,r,i,j,ans=0;
        cin>>n>>m>>k>>l;
        long long int a[n],b[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(n==1 && a[0]<=k)
        {
            ans=(k-(a[0]+1));
        }
        else{
        for(i=0;i<n;i++)
        {
            r=0;
            for(j=0;j<n;j++)
            {
                if(a[j]<=a[i])
                {
                    r++;
                }
            }
            //cout<<r<<endl;
            b[i]=((m+r)*l)-a[i];
        }
        sort(b,b+n);
        /*for(i=0;i<n;i++)
        {
            cout<<b[i]<<endl;
        }*/
        for(i=0;i<n;i++)
        {
            if(a[i]<=k)
                {
                    ans=b[i];
                    break;
                }
        }
        }
        cout<<ans<<endl;
    }
}
