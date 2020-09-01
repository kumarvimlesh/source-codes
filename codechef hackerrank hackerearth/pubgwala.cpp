#include<bits/stdc++.h>
using namespace std;
int dectobin(long long int num)
{
  long long int i = 0;
  long long int bn[1000];
    while (num > 0) {
        bn[i] = num % 2;
        cout<<bn[i];
        num = num / 2;
        i++;
    }
   // cout<<"\n";
   return(bn[0]);
}
int main()
{
    long long int n,count=0;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(dectobin(a[i])==1)
            count++;
    }
    cout<<count;
}
