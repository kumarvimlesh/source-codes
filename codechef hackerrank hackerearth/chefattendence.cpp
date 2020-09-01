#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        int D,count=0,p=0;
        float x=0;
        cin>>D;
        string str;
            cin>>str;
        for(int i=0;i<D;i++)
        {
            if(i!=0 && i!=1 && i!=D-1 && i!=D-2 && str[i-1]=='P' && str[i-2]=='P' && str[i]=='A' && (str[i+1]=='P' || str[i+2]=='P'))
                count++;
            if(str[i]=='P')
             p++;
        }
        x=0.75*D-p;
        if(x!=int(x))
            x=int(x)+1;
        if(x>count)
            cout<<"-1";
        else
            cout<<x;
    }
    return 0;
}
