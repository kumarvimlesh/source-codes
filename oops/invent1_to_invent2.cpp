#include<iostream>
using namespace std;
class invent1
{
private:
    int code,items;
    float price;
public:
    invent1()
    {
        cout<<"\nEnter item code, no. of item and price of item : ";
        cin>>code>>items>>price;
    }
    int getcode()
    {
        return code;
    }
    int getitems()
    {
        return items;
    }
    int getprice()
    {
        return price;
    }
    void display()
    {
        cout<<"\ncode : "<<code<<"\nitems : "<<items<<"\nprice : "<<price<<"\n";
    }
};
class invent2
{
private:
    int code;
    float value;
public:
    invent2()
    {
        code=0;
        value=0;
    }
    invent2(invent1 obj)
    {
        code=obj.getcode();
        value=obj.getitems()*obj.getprice();
    }
    void display()
    {
        cout<<"\ncode : "<<code<<"\nvalue : "<<value;
    }
};
int main()
{
    cout<<"*************"<<endl<<"Vimlesh kumar"<<endl<<"171210059"<<endl<<"*************"<<endl;
    invent1 obj1;
    invent2 obj2;
    obj2=obj1;
    cout<<"\nInvent1 : ";
    obj1.display();
    cout<<"\nInvent2  : ";
    obj2.display();
    return 0;
}
