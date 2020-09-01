#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
        int x[n],y[n],m1=0,m2=0;
        for(int i=0;i<n;i++)
        {
            cin>>x[i]>>y[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                for(int k=j;k<n;k++)
                {
                    for(int l=k;l<n;l++)
                    {
                        m1=(y[i]-y[j])*(y[k]-y[l]);
                        m2=(x[i]-x[j])*(x[k]-x[l]);
                        if(m1+m2==0 && i!=j && j!=k && k!=l && l!=i)
                        {
                            count++;
                        }
                    }
                }
            }
        }
    cout<<count;
    return 0;
}
