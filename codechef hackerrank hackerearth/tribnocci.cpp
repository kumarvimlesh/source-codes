#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0;
        cin>>n;
        int a[n];
        a[0]=0;
        a[1]=0;
        a[2]=1;
        for(int i=3;i<=n;i++)
        {
            a[i]=a[i-1]+a[i-2]+a[i-3];
        }
        n=n+1;
        while(n--)
        {
            sum+=a[n];
        }
        cout<<sum<<"\n";
    }
    return 0;
}
