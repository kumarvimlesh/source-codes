#include<bits/stdc++.h>
using namespace std;
class person
{
    string name;
    string dob;
public:
    person()
    {
        cout<<"Enter the name of person : ";
        cin>>name;
        cout<<"Enter the dob in format dd:mm:yyyy : ";
        cin>>dob;
        try
        {
            string s=dob.substr(6,9);
            if(dob.length()!=10 || s.length()!=4 || dob[2]!=':' || dob[5]!=':')
                throw(1);
        }
        catch(int)
        {
            cout<<"Invalid DOB ";
            _Exit(1);
        }
    }
    void display()
    {
        cout<<name<<" \n"<<dob;
    }
};
int main()
{
    cout<<"*************"<<endl<<"Vimlesh kumar"<<endl<<"171210059"<<endl<<"*************"<<endl;
    person P1;
    P1.display();
    return 0;
}
