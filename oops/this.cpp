#include<iostream>
#include<string>
using namespace std;
class Student
{
    private:
       string name;
       int roll ;
    public:
    void student(string name,int roll)
    {
        this->name=name;
        this->roll=roll;
    }
    void display()
    {
        cout<<"Student Name : "<<name<<"\n"<<"Roll No. : "<<roll;
    }
};
int main()
{
    cout<<"*************"<<endl<<"Vimlesh kumar"<<endl<<"171210059"<<endl<<"*************"<<endl;
    Student S1;
    string name;
    int roll=0;
    cout<<"Enter the name of Student : ";
    cin>>name;
    cout<<"Enter the Roll No. : ";
    cin>>roll;
    S1.student(name,roll);
    S1.display();
    return 0;
}
