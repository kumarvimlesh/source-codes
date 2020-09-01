#include<iostream>
using namespace std;
int main()
{
    int n,score=0;
    cin>>n;
    int t=n;
    while(n--)
    {
        int q,p;
        cin>>p>>q;
        score+=p;
        t+=q-1;
        cout<<t<<"\n";
        if(t<=0)
            break;
    }
    cout<<score;
    return 0;
}
