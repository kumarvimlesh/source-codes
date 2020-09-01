#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int X,Y,Z,p=0;
        cin>>X>>Y>>Z;
        if((-X+Y+Z)==0)
            p++;
        else if((X-Y+Z)==0)
            p++;
        else if((X+Y-Z)==0)
            p++;
        else if((-X-Y+Z)==0)
            p++;
        else if((-X+Y-Z)==0)
            p++;
        else if((X-Y-Z)==0)
            p++;
            if(p)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
    }
    return 0;
}
