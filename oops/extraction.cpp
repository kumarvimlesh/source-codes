#include<iostream>
using namespace std;
class phone_number
{
private:
    string s1,s2,s3;
public:
    friend istream& operator >> (istream &input,phone_number &c1);
    friend ostream& operator << (ostream &output,phone_number &c2);
};
istream& operator >> (istream &input,phone_number &c1)
{
    cout<<"Enter area code:";
    input>>c1.s1;
    cout<<"Enter Exchange:";
    input>>c1.s2;
    cout<<"Enter Line :";
    input>>c1.s3;
    return input;
}
ostream& operator << (ostream &output,phone_number &c2)
{
    output<<"Your entered phone number is:";
    output<<"("<<c2.s1<<")-"<<c2.s2<<"-"<<c2.s3;
    return output;
}
int main()
{
    cout<<"*************"<<endl<<"Vimlesh kumar"<<endl<<"171210059"<<endl<<"*************"<<endl;
    phone_number o1;
    cin>>o1;
    cout<<o1;
}
