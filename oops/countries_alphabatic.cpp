#include<iostream>
#include<string>
using namespace std;
int main()
{
    cout<<"*************"<<endl<<"Vimlesh kumar"<<endl<<"171210059"<<endl<<"*************"<<endl;
    int n;
    cout<<"Enter the number of cities you want to enter : ";
    cin>>n;
    string country[n],temp;
    cout<<"Enter countries name : ";
    for(int i=0;i<n;i++)
    {
        cin>>country[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(country[i].compare(country[j])<0)
            {
                temp=country[i];
                country[i]=country[j];
                country[j]=temp;
            }
        }
    }
    cout<<"\nCountries name in alphabetical order : \n";
    for(int i=0;i<n;i++)
    {
        cout<<country[i]<<"\n";
    }
    return 0;
}
