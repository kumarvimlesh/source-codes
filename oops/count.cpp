#include<iostream>
using namespace std;
int count=0;
int countd=0;
class objcount
{
public:
    objcount()
    {
        count++;
    }
    ~objcount()
    {
        countd++;
    }
    void display()
    {

        cout<<"number of object is:"<<count;
        count<<countd;
    }

};
int main()
{
 cout<<"*************"<<endl<<"Vimlesh kumar"<<endl<<"171210059"<<endl<<"*************"<<endl;
    objcount a;
    objcount b;
    objcount c;
    objcount d;
    a.display();
    delete b;
 return 0;
}

