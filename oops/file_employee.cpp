#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    cout<<"*************"<<endl<<"Vimlesh kumar"<<endl<<"171210059"<<endl<<"*************"<<endl;
    int count=0;
    ofstream ofile;
    ofile.open("employee.txt",ios::out);
    char name[10];
    float salary;
    char op;
    do
    {
        cout<<"enter the name and salary : ";
        cin>>name>>salary;
        ofile<<name<<" "<<salary<<"\n";
        cout<<"want to enter more => y or n : ";
        cin>>op;
        count++;
    }while(op=='y');
    ofile.close();
    cout<<"\nReading from file : \n";
    ifstream ifile("employee.txt");
    while(count--)
    {
        ifile>>name>>salary;
        cout<<name<<" "<<salary<<"\n";
    }
    ifile.close();
        return 0;
}

