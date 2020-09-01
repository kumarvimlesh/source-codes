#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    map<long long,int>ma,mb,msum;
    long long a[n],b[m],num=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        ma[a[i]]=i;
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        mb[b[i]]=i;
    }
    if(n<1001&&m<1001)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(msum[a[i]+b[j]]==0)
				{
					cout<<i<<" "<<j<<endl;
					msum[a[i]+b[j]]++;
					num++;
				}
			}
			if(num>n+m-1)
			break;
		}
	}
	else
	{
		sort(a,a+n);
        sort(b,b+n);
        for(int i=0;i<m;i++)
        {
            cout<<ma[a[0]]<<" "<<mb[b[i]]<<endl;
        }
        for(int i=1;i<n;i++)
        {
            cout<<ma[a[i]]<<" "<<mb[b[m-1]]<<endl;
        }
	}
    return 0;
}
