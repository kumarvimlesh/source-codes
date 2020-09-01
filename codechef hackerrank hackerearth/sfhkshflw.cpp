#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
     cin>>t;
    while(t--)
    {
        int N,a,b,i,j,k,z=0,x;
        cin>>N>>a>>b;
        long int r = pow(3,N);
        int marks[r];
        for(i=0;i<=N;i++)
        {
            for(j=0;j<=N;j++)
            {
                for(k=0;k<=(N-i-j);k++)
                {
                    if((i+j+k)==N)
                    {
                        marks[++z]=a*i-b*j+0;
                    }
                }
            }
        }
        x=z;
        for(i=1;i<z;i++)
        {
                if(marks[i]==marks[i+1])
                x--;
        }
        cout<<x<<endl;
    }
    return 0;
}
