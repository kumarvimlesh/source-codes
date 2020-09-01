#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int M=1000000007;
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,i,product=1,sum=0,v=0,u=0;
        cin>>n>>k;
        long long int a[k];
        if(((k*(k+1))/2)>n)
            cout<<"-1"<<endl;
        else
        {
          a[1]=((n/k)+(k/2));
          //cout<<a[1]<<endl;//comment
          for(i=2;i<=k;i++)
          {
              a[i]=(a[i-1]-1);
              //cout<<a[i]<<endl;//comment
          }
          for(i=1;i<=k;i++)
          {
              sum+=a[i];
          }
          //cout<<sum<<endl;//comment
          if(sum>n)
          {
              //v=n-sum;
              i=0;
              //cout<<v<<endl;//comment
              while(sum!=n)
              {
                  a[k-i]--;
                  //cout<<a[k-i]<<"hello"<<endl;//comment
                  i++;
                  sum--;
              }
          }
          if(sum<n)
          {
              //u=n-sum;
              i=1;
              while(sum!=n)
              {
                  a[i++]++;
                  //cout<<"hi"<<endl;//comment
                  sum++;
              }
          }
          for(i=1;i<=k;i++)
          {
              product=((product%M)*(a[i]%M)*(((a[i]%M)-1)%M))%M;
              //cout<<product<<endl;//comment
          }
          cout<<product%M<<endl;
        }
    }
    return 0;
}
