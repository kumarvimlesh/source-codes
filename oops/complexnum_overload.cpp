#include<iostream>
using namespace std;
class complex
{
    private:
        int a;
        int b;
    public:
        complex()
        {
            a=0;
            b=0;
        }
        getinput()
        {
            cout<<"  Enter the Real part : ";
            cin>>a;
            cout<<"  Enter the Imaginary part : ";
            cin>>b;
            cout<<"\n";
        }
        complex operator + (complex obj)
        {
            complex c3;
            c3.a=a+obj.a;
            c3.b=b+obj.b;
            return c3;
        }
        complex operator * (complex obj)
        {
            complex c4;
            c4.a=a*obj.a-b*obj.b;
            c4.b=a*obj.b+b*obj.a;
            return c4;
        }
        display()
        {
            cout<<a<<" + j"<<b<<"\n\n";
        }
};
int main()
{
    cout<<"*************"<<endl<<"Vimlesh kumar"<<endl<<"171210059"<<endl<<"*************"<<endl;
    complex c1,c2,c3,c4;
    cout<<"First complex number : \n";
    c1.getinput();
    cout<<"Second complex number : \n";
    c2.getinput();
    cout<<"+ operator overloading \n";
    c3=c1+c2;
    c3.display();
    cout<<"* operator overloading : \n";
    c4=c1*c2;
    c4.display();
    return 0;
}
