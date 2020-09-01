#include<iostream>
using namespace std;
class IncDic
{
private:
    int a;
public:
    IncDic()
    {
        a=0;
    }
    getinput()
    {
        cout<<"Enter any number : ";
        cin>>a;
    }
    IncDic operator ++ (int)
    {
        IncDic k;
        k.a = a;
        a++;
        return (k);
    }
    IncDic operator ++ ()
    {
        IncDic k;
        k.a=++a;
        return (k);
    }
    IncDic operator -- (int)
    {
        IncDic k;
        k.a = a;
        a--;
        return (k);
    }
    IncDic operator -- ()
    {
        IncDic k;
        k.a=--a;
        return (k);
    }
    display()
    {
        cout<<a<<"\n";
    }
};
int main()
{
    cout<<"*************"<<endl<<"Vimlesh kumar"<<endl<<"171210059"<<endl<<"*************"<<endl;
    IncDic A;
    A.getinput();
    cout<<"PreIncrement : ";
    ++A;
    A.display();
    cout<<"PostIncrement : ";
    (A++).display();
    cout<<"Final Increment value : ";
    A.display();
    cout<<"Decrement : ";
    --A;
    A.display();
    cout<<"Decrement : ";
    (A--).display();
    cout<<"Final Decrement value : ";
    A.display();
    return 0;
}
