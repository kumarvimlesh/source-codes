#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        char a[n],x;
        for(int i=0;i<n;i++)
            cin>>a[i];
        cin>>x;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]==x)
            {
                count+=i+1;
            }
        }
        cout<<count<<"\n";
    }
return 0;
}
