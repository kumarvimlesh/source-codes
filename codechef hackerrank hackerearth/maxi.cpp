#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i,product=1,sum=0;
        cin>>n>>k;
        int a[k];
        int p=n/k;
        int q=p;
        for(i=k/2;i<=k;i++)
        {
            a[i]=p++;
        }
        for(i=k/2;i>0;i--)
        {
            a[i]=q--;
        }
        for(i=1;i<=k;i++)
        {
            sum+=a[i];
        }
        while(sum<n)
            {

        for(i=1;i<=k;i++)
        {
            product*=((a[i]*a[i])-a[i]);
        }
        cout<<product%1000000007;
    }
}
