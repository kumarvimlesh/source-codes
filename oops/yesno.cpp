#include<iostream>
using namespace std;
int main()
{
    long long int n,b,a1,a2,A1=0,A2=0,flag=0,max=0,count=0;
    cin>>n>>b;
    long int p[n];
    int rand();
    for(int i=1;i<=n;i++)
        cin>>p[i];
  while(1)
  {
          a1=rand();
          a2=rand();
             count=0;
                for(int i=1;i<=n;i++)
                {
                if((a1%p[i]-a2%p[i])==0 && a1!=a2)
                {
                    count++;
                }
                if(count==n)
                    {
                         A1=a1;
                         A2=a2;
                        flag=1;
                        break;
                    }

    }
    if(flag==1)
        break;
}
 //cout<<A1<<" "<<A2;
    if((A1%b-A2%b)==0)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
