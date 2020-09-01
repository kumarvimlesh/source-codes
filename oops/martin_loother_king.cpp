#include<iostream>
#include<string>
using namespace std;
int main()
{
    cout<<"*************"<<endl<<"Vimlesh kumar"<<endl<<"171210059"<<endl<<"*************"<<endl;
    string s1="Martin";
    string s2="Loother";
    string s3="King";
    string s;
    s=s1+" "+s2+" "+s3;
    cout<<"\nusing + operator : "<<s<<"\n";
    s=(((s1.append(" ")).append(s2)).append(" ")).append(s3);
    cout<<"\nusing append function : "<<s<<"\n";
    return 0;
}
