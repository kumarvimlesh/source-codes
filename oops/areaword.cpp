#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h[26],i=0,l;
    for(int i=0;i<26;i++)
    cin>>h[i];
    string s;
    cin>>s;
    l=s.length();
    //cout<<l<<"\n";
    int a[l];
    for(i=0;i<l;i++)
    {
      //cout<<s[i]<<" "<<int(s[i]);
      a[i]=h[int(s[i])-97];
      //cout<<" "<<a[i]<<"\n";
    }
    sort(a,a+l);
    cout<<l*a[l-1];
    return 0;
}
