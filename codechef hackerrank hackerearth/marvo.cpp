#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,rem=0;
        cin>>n;
        int fourN,nineN;
        fourN=(n/9)*9;
        nineN=n-fourN;
        rem=nineN%4;
        if(!rem)
        {
            for(int i=0;i<n;i++)
           {
             if(i<nineN)
             cout<<"9";
             else
                cout<<"4";
            }
           cout<<"\n";
        }
        else
        {
            cout<<"Not Found\n";
        }
    }
    return 0;
}
