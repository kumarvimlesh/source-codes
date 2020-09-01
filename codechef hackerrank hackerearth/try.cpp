#include<iostream>
using namespace std;
class complex{
float a;
float b;
ostream &operator << (ostream &output);
istream &operator >> (istream &input);
};
basic_ostream ostream :: ostream &operator << (ostream &output)
{  complex c;
    output<<c.a<<"i"<<c.b;
    return (output);
}
complex istream :: istream &operator >> (istream &input)
{    complex c;
    input>>c.a>>c.b;
    return input;
}
int main()
{
    complex c1;
    cin>>c1;
    cout<<c1;
    return 0;
}
