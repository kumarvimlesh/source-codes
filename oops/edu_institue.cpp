#include<iostream>
#include<string>
using namespace std;
class staff
{
protected:
    int code;
    string name;
public:
    get_input()
    {
        cout<<"\nEnter Code and Name : ";
        cin>>code>>name;
    }
    void display()
    {
        cout<<"\nCode : "<<code<<"\nName : "<<name;
    }
};
class teacher:public staff
{
private:
    string sub;
    string dept;
public:
    teacher()
    {
        staff::get_input();
        cout<<"Enter Subject Name and Department of Teacher : ";
        cin>>sub>>dept;
    }
    void display()
    {
        staff::display();
        cout<<"\nSubject : "<<sub<<"\nDepartment : "<<dept<<"\n";
    }
};
class typist:public staff
{
private:
    int speed;//no. of words per minute
    string quality;//bad,average,good,excellent
public:
    typist()
    {
        staff::get_input();
        cout<<"Enter Speed and Quality : ";
        cin>>speed>>quality;
    }
    void display()
    {
        staff::display();
        cout<<"\nSpeed : "<<speed<<"\nQuality : "<<quality<<"\n";
    }
};
class officer:public staff
{
private:
    string pos;
public:
    officer()
    {
        staff::get_input();
        cout<<"Enter the position of officer : ";
        cin>>pos;
    }
    void display()
    {
        staff::display();
        cout<<"\nposition : "<<pos<<"\n";
    }
};
int main()
{
    cout<<"*************"<<endl<<"Vimlesh kumar"<<endl<<"171210059"<<endl<<"*************"<<endl;
    staff S;
    cout<<"\nTeacher : ";
    teacher T;
    T.display();
    cout<<"\nTypist : ";
    typist Ty;
    Ty.display();
    cout<<"\nOfficer : ";
    officer O;
    O.display();
    return 0;
}
