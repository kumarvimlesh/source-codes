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
    operator float()
    {
        float total;
        total=items*price;
        return (total);
    }
};
int main()
{
    cout<<"*************"<<endl<<"Vimlesh kumar"<<endl<<"171210059"<<endl<<"*************"<<endl;
    invent1 obj1;
    float total=0;
    total=obj1;
    cout<<"invent1 to float : \ntotal : "<<total;
    return 0;
}
