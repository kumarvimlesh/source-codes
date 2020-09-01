#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,b;
    cin>>n;
    long long int a[n];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";
    return 0;
}
