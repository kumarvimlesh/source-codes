#include<bits/stdc++.h>
using namespace std;
int  main()
{
    long long int k,n,max=0;
    cin>>n;
    long int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    k=n-2;
    while(1)
    {   if(k==0)
    {
        cout<<a[k]%a[n-1];
        break;
    }
        if(a[k]%a[n-1]!=0)
        {
            cout<<a[k]%a[n-1];
            break;
        }
        else
            k--;

    }
    return 0;
}
