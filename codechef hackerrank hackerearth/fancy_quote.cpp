#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,a=0;
    cin>>n;
    while(n--)
    {
        string name;
        string no;
	    getline(cin,name);
	    for(int j=0;j<3;j++)
        {
            for(int i=0;i<name.length();i++)
            {
              no[j]=name[i];
              if(name[i]==' ')
                {
                   if(no[0]=='n' && no[1]=='o' &&no[2]=='t')
                  {
                    cout<<"Real Fancy"<<"\n";
                    a=1;
                    break;
                  }
                  i++;
                }
            }

        }
       if(a==0)
        cout<<"Regular Fancy"<<"\n";
    }
    return 0;
}
