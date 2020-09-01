#include <bits/stdc++.h>
using namespace std;

void removeDupWord(string name)
{
   string word = "";
   for (static x : name)
   {
       if (x == ' ')
       {
           return(word);
           word = "";
       }
       else
       {
           word = word + x;
       }
   }
   return(word);
}
int main()
{
    int n,a=0;
    cin>>n;
    while(n--)
    {
        string name;
        getline(cin,name);
        if(removeDupWord(name)=='not')
        {
            cout<<"Real Fancy"<<"\n";
            a=1;
            break;
        }
        if(a==0)
        {
            cout<<"Regular Fancy";
        }
    }
    return 0;
}
