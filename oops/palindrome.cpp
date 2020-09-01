#include<bits/stdc++.h>
using namespace std;
int checkpalin(string s)
{
    int l=s.length();
    int i;
    for(i=0;i<l/2;i++)
    {
        if(s[i]!=s[l-i-1])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    string s;
    int coun=0;
    cin>>s;
    int l=s.length();
    int i,j,l1,l2;
    for(l1=1; l1<l; l1++)
    {
        for(l2=1; l1+l2<=l; l2++)
        {
            for(i=0; i+l1<=l; i++)
            {
                for(j=i+l1; j+l2<=l; j++)
                {
                      string s1=s.substr(i,l1);
                      string s2=s.substr(j,l2);


                        string s3=s1+s2;
                        if(checkpalin(s3)==1)
                        {
                         //   cout<<s1<<endl;
                         cout<<s1<<" "<<s2<<endl;
                         cout<<i<<" "<<i+l1<<" "<<j<<" "<<j+l2<<endl;
                            coun++;
                        }
                }
            }
        }
    }
    cout<<coun<<endl;
}
