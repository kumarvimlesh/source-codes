#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char name[10];
    float salary;
    char op;
    do
    {
        cout<<"enter the name and salary : ";
        cin>>name>>salary;
        fstream fout("employee.txt");
        fout<<name<<salary;
        fout.close();
        cout<<"want to enter more : y or n";
        cin>>op;
    }
    while(op=='y');
        return 0;
}

