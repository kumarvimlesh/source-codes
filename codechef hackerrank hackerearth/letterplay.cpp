#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int l=0,i=0,fact=1,count=0;
    char s[100];
    cin>>s;
    while(s[i]!='\0')
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            count++;
        }
        i++;
    }
    int j=i;
    for(i=1;i<j;i++)
    {
        fact=fact*i;
        cout<<fact<<" ";
    }
    cout<<fact;
    if(count>l-count)
    {
        cout<<"Sanjay "<<(count*fact);
    }
    else
    {
        cout<<"Kishore "<<(l-count)*fact;
    }
    return 0;
}
