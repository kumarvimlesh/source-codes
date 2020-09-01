#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,a,b,k,count=0,minMultiple,lcm=0;
        cin>>n>>a>>b>>k;
        minMultiple = (a>b) ? a : b;
       while(1)
    {
        if( minMultiple%a==0 && minMultiple%b==0 )
        {
            lcm=minMultiple;
            break;
        }
        ++minMultiple;
    }
    count=n/a+n/b-2*(n/lcm);
        if(count==k)
            cout<<"Win\n";
        else
            cout<<"Lose\n";
    }
    return 0;
}
