#include<bits/stdc++.h>
using namespace std;
int main()
{
    #define int long long int
    int n,q;
    cin>>n>>q;
    int a[n],pr[n],su[n];
    memset(pr,0,sizeof pr);
    memset(su,0,sizeof su);
    cin>>a[0];
    int c=0,fl=0,c1=0,fl1=0;
    pr[0]=0;
    su[0]=0;
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>a[i-1])
        {
            if(fl==0)
            {
                c++;
                fl=1;
                pr[i]=c;
            }
            else
            {
                pr[i]=c;
            }
        }
        else
        {
            fl=0;
            pr[i]=c;
        }

        if(a[i]<a[i-1])
        {
            if(fl1==0)
            {
                c1++;
                fl1=1;
                su[i]=c1;
            }
            else
            {
                su[i]=c1;
            }
        }
        else
        {
            fl1=0;
            su[i]=c1;
        }
    }



    while(q--)
    {

        int l,r,va,va1;
        cin>>l>>r;
        l--;
        r--;
        if(l!=0)
        {
        va=pr[r]-pr[l];
        //cout<<va<<" d ";
        va+=a[l+1]>a[l]?1:0;
        //cout<<va<<" 1 ";
        va-=a[l]<a[l-1]?1:0;
        //cout<<va<<" 2 ";
        va1=su[r]-su[l];
        //cout<<va1<<" d ";

        va1+=a[l+1]<a[l]?1:0;
        //cout<<va1<<" 1 ";
        va1-=a[l]>a[l-1]?1:0;
        //cout<<va1<<" 2 ";
        }
        else
        {

        va=pr[r]-pr[l];
        va1=su[r]-su[l];
        }

        if(va==va1)
        {
            //cout<<va<<" "<<va1<<" ";
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";
    }
}
