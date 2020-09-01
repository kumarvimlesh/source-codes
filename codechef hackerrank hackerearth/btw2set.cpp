#include<iostream>
using namespace std;
int main()
{
    int m,n,count=0;
    cin>>m>>n;
    int a[m],b[n];
    for(int i=0;i<m;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    cin>>b[i];
    for(int i=a[m-1];i<=b[0];i++)
    {
      int flag1 = 0, flag2 = 0;
       for (int j = 0; j < m; j++) {
        if (i % a[j] == 0)
          flag1++;
      }
        for (int k = 0; k < n; k++) {
          if (b[k] % i == 0)
            flag2++;
        }
        if(flag1==m && flag2==n)
         count++;
    }
    cout<<count;
    return 0;
}
