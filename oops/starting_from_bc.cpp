#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"*************"<<endl<<"Vimlesh kumar"<<endl<<"171210059"<<endl<<"*************"<<endl;
    int n;
    cout<<"Enter the number of cities : ";
    cin>>n;
    string city[n];
    cout<<"Enter the name of cities : \n";
    for(int i=0;i<n;i++)
    {
        cin>>city[i];
    }
    cout<<"\nname of cities starting from letter b or c : \n";
    for(int i=0;i<n;i++)
    {
        if(city[i][0]=='b' || city[i][0]=='c')
            cout<<city[i]<<"\n";
    }
}
